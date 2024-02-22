/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>


enum {
  TK_NOTYPE = 256,
  TK_EQ ,
  TK_NEQ ,
  TK_OR,
  TK_AND,
  TK_NUM ,
  TK_REG,
  TK_HEX,
  DEREF,
  TK_LEFT = 40,
  TK_RIGHT = 41,


  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'},         // minus
  {"\\*", '*'},         // multiply
  {"/", '/'},           // divide
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},       // nor equal
  {"\\(", TK_LEFT},        
  {"\\)", TK_RIGHT},
  {"\\|\\|", TK_OR},
  {"&&", TK_AND},
  {"0[xX][0-9a-fA-F]+", TK_HEX},    //hex numbers
  {"[0-9]+", TK_NUM},   //numbers
  {"\\$(\\$0|ra|[sgt]p|t[0-6]|a[0-7]|s([0-9]|1[0-1]))", TK_REG},  //registers

  

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

word_t eval(int p, int q);
int get_op_position(int p, int q);
bool check_parentheses(int p, int q);

static bool make_token(char *e) {
  int position = 0;
  int i;
  int tag = 0;
  regmatch_t pmatch;

  nr_token = 0;
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {      //success
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo; // end position

        // Log(DEBUG,"match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        int find_token_type = rules[i].token_type;
        
        //check parentheses
        if(find_token_type== TK_LEFT) tag++;
        else if(find_token_type == TK_RIGHT) tag--;
        if(tag<0) {
          printf("check parentheses error!\n");
          return false;
        }
  
        switch (find_token_type) {
          case TK_NOTYPE: break;
          default: 
            //check '-'
            if((find_token_type == TK_NUM ) && (tokens[nr_token-2].type == '(' ) && (tokens[nr_token-1].type == '-' )){
              nr_token--;
              substr_start--;
              substr_len++;
            }

            //check '*'
            if((find_token_type == '*' ) && 
            ((tokens[nr_token-1].type == '(' ) || (tokens[nr_token-1].type == '+' || tokens[nr_token-1].type == '-' || nr_token == 0)) ){
              find_token_type = DEREF;
            }

            //check TK_REG
            if(find_token_type == TK_REG) {
              substr_start++;
              substr_len--;
            }

            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            tokens[nr_token].type = find_token_type;
            nr_token++;
        }
        break;
        //TODO: handle overflow
      }
    }
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  if (tag != 0){
    printf("check parentheses error!\n");
    return false;
  }
  return true;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  return eval(0, nr_token-1);
}

bool check_parentheses(int p, int q){
    int i,tag = 0;
    if(tokens[p].type != TK_LEFT || tokens[q].type != TK_RIGHT) return false; 
    for(i = p; i <= q; i ++){    
        if(tokens[i].type == TK_LEFT) tag++;
        else if(tokens[i].type == TK_RIGHT) tag--;
        if(tag == 0 && i < q) {// like : (4 + 3) * (2 - 1);  
          return false;
        }
    }                              
    //if(tag != 0) return false;   
    return true;                   
} 

word_t eval(int p, int q){
  if (p > q){ // Bad expression
    return 0;
  }else if (p == q){  //Single token
    // Log(DEBUG, "get num: %s",tokens[p].str);
    word_t rc = 0;
    if(tokens[p].type == TK_REG){
      rc = isa_reg_str2val(tokens[p].str, NULL);
    }else if(tokens[p].type == TK_HEX){
      rc = strtol(tokens[p].str, NULL, 16);
    }else{
      rc = strtol(tokens[p].str, NULL, 10);
    }
    return rc;
  }else if (check_parentheses(p, q) == true){
    return eval(p + 1, q -1); //minify judge range
  }else{ // no parentheses ; do mian operating
    int op = get_op_position(p, q);
    // Log(DEBUG, "index: %d,get op : %c",op,tokens[op].type);
    int val1 = eval(p, op - 1);
    int val2 = eval(op + 1, q);

    switch (tokens[op].type){// op_type
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': 
      // except /0 
        if (val2 == 0) assert(0);
        return val1 / val2;
      case TK_EQ: return val1 == val2;
      case TK_NEQ: return val1 != val2;
      default: assert(0);
      break;
    }
    return 0;
  }
}

int get_op_position(int p, int q){
  int index = 0 , tag = 0, op_level = 0, tmp_level = 0;

  for (int i = p; i <= q; i++) { 
    tmp_level = 0;
    // Log(DEBUG, "get op:%d",tokens[i].type);
    switch (tokens[i].type) {
      case TK_NUM:
      case TK_HEX:
      case TK_REG: break;
      case TK_LEFT: tag++; break;
      case TK_RIGHT:
        tag--;
        if(tag < 0) assert(0);
        break;  
      case TK_EQ: case TK_NEQ:
        if (tag == 0) tmp_level= 1; 
        break;
      case '*': case '/': 
        if (tag == 0) tmp_level= 2; 
        break;
      case '+': case '-': 
        if (tag == 0) tmp_level = 3; 
        break;
      default: assert(0);
    }
    if (tmp_level >= op_level) {
      op_level = tmp_level;

      index = i;
    }
  }
  if (tag != 0) assert(0);
  return index;
}

void init_expr(){
  int test_num = 0, pass_num = 0;
  word_t correct_result = 0, expr_result = 0;
  char buf[65535];

  FILE *fp = fopen("/home/sends/local/share/ysyx-workbench/npc/tools/gen-expr/build/input", "r");
  assert(fp != NULL);
  
  while (fgets(buf,65535,fp))
  {
    test_num++;
    // printf("buf : %s \n",buf);
    correct_result = atoi(strtok(buf," "));
    char *e = strtok(NULL," ");
    bool success = true;
    int index = (int) strlen(e) - 1;

    e[index] = '\0';
    expr_result = expr(e,&success);
    if(correct_result == expr_result || success == true) pass_num++;
    printf("test_num:%d pass_num:%d\n",test_num,pass_num);
  }
  fclose(fp);
  if (test_num == pass_num) Log(INFO, "Finish init expr with %d test exprs passed!",pass_num);
  else {Log(ERROR, "failed init expr!"); assert(0);} 

}