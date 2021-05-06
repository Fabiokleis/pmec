#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"
// projeto readpe
// brincando um pouco com FILE e funcoes para arquivos
// pt2 do projeto - Implementacao de biblioteca e make file

/*
 * struct do .h para chamar as funcoes
 
 
  typedef struct {
    char *filepath;
    IMAGE_DOS_HEADER *hdr_dos;
} PEFILE;
 
*/

void fatal(char *msg){
    fprintf(stderr, "%s\n", msg);
    exit(1);
}
void usage(void){
    printf("Uso:\n\treadpe <arquivo.exe>\n");
    exit(1);
}

int main(int argc, char *argv[]){
    if (argc != 2){
        usage();
    }   
    PEFILE pe;

    pe.filepath = argv[1];
   
    puts(pe.filepath);
    petest_init(&pe);
    if (petest_ispe(&pe)){
        printf("É um exe PE..\n");
    }
    else{
        fatal("Não é um PE..");
    }

    printf("Filepath: %s\n", pe.filepath);
    printf("MZ header: %x\n", pe.hdr_dos->e_magic);
    printf("COFF header offset: %x\n", pe.hdr_dos->e_lfanew);
    
    petest_deinit(&pe);

    return 0;

}


