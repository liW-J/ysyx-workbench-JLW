#include <common.h>
#include <elf.h>
#include <device/map.h>

typedef struct {
  char name[64];
  paddr_t addr; // the function head address
  Elf32_Xword size;
} SymbolInfo;

SymbolInfo *symbol = NULL; // dynamic allocate memory  or direct allocate memory (Symbol symbol[NUM])
int func_num = 0;


void parse_elf(const char *elf_file)
{

  
  if(elf_file == NULL) return;
  
  FILE *fp;
  fp = fopen(elf_file, "rb");
  if(fp == NULL){ LOG(WARN, "failed to open the elf file!\n"); exit(0); }

  Elf32_Ehdr eh;
//读取elf头
  if(fread(&eh, sizeof(Elf32_Ehdr), 1, fp) <= 0){ LOG(WARN, "fail to read the elf_head!\n"); exit(0); }

  	/* ELF magic bytes are 0x7f,'E','L','F'
	 * Using  octal escape sequence to represent 0x7f
	 */
	if(!strncmp((char*)eh.e_ident, "\177ELF", 4)) LOG(INFO, "ELFMAGIC \t= ELF\n");
  else {LOG(WARN, "ELFMAGIC mismatch!\n"); exit(0); }
  
  fseek(fp, eh.e_shoff, SEEK_SET);

  Elf32_Shdr sh_tbl;
  char *string_table = NULL;
  //寻找字符串表
  for(int i = 0; i < eh.e_shnum; i++)
  {
    if(fread(&sh_tbl, sizeof(Elf32_Shdr), 1, fp) <= 0){ LOG(WARN, "fail to read the shdr\n"); exit(0); }
    
    if(sh_tbl.sh_type == SHT_STRTAB)
    {
      //获取字符串表
      string_table = malloc(sh_tbl.sh_size);
      fseek(fp, sh_tbl.sh_offset, SEEK_SET);
      if(fread(string_table, sh_tbl.sh_size, 1, fp) <= 0){ LOG(WARN, "fail to read the strtab\n"); exit(0);}
    }
  }
  
  //寻找符号表
  fseek(fp, eh.e_shoff, SEEK_SET);
  
  for(int i = 0; i < eh.e_shnum; i++)
  {
    if(fread(&sh_tbl, sizeof(Elf32_Shdr), 1, fp) <= 0){ LOG(WARN, "fail to read the shdr\n"); exit(0); }

    if(sh_tbl.sh_type == SHT_SYMTAB)
    {
      fseek(fp, sh_tbl.sh_offset, SEEK_SET);

      Elf32_Sym sym;
      size_t sym_count = sh_tbl.sh_size / sh_tbl.sh_entsize;
      symbol = malloc(sizeof(SymbolInfo) * sym_count);

      for(size_t j = 0; j < sym_count; j++)
      {
        if(fread(&sym, sizeof(Elf32_Sym), 1, fp) <= 0){ LOG(WARN, "fail to read the symtab\n"); exit(0);}

        if(ELF32_ST_TYPE(sym.st_info) == STT_FUNC)
        {
          const char *name = string_table + sym.st_name;
          strncpy(symbol[func_num].name, name, sizeof(symbol[func_num].name) - 1);
          symbol[func_num].addr = sym.st_value;
          symbol[func_num].size = sym.st_size;
          func_num++;
        }
      }
    }
  }
  fclose(fp);
  free(string_table);
}

int rec_depth = 1;
void display_call_func(word_t pc, word_t func_addr)
{
  int i = 0;
  for(; i < func_num; i++)
  {
    if(func_addr >= symbol[i].addr && func_addr < (symbol[i].addr + symbol[i].size))break;
  }
  ftrace_write("0x%08x:", pc);
  for(int k = 0; k < rec_depth; k++) ftrace_write(" ");
  rec_depth++;
  ftrace_write("call  [%s@0x%08x]\n", symbol[i].name, symbol[i].addr);
}

void display_ret_func(word_t pc)
{
  int i = 0;
  for(; i < func_num; i++)
  {
    if(pc >= symbol[i].addr && pc < (symbol[i].addr + symbol[i].size))break;
  }
  ftrace_write("0x%08x:", pc);
  rec_depth--;
  for(int k = 0; k < rec_depth; k++) ftrace_write(" ");
  ftrace_write("ret  [%s]\n", symbol[i].name);
}
