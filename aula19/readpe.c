#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"
// projeto readpe
// brincando um pouco com FILE e funcoes para arquivos
// pt2 do projeto - Implementacao de biblioteca e make file


void fatal(char *msg){
    fprintf(stderr, "%s\n", msg);
    exit(1);
}
void usage(void){
    printf("Uso:\n\treadpe <arquivo.exe>\n");
    exit(1);
}

int main(int argc, char *argv[]){
    FILE *fh;
    unsigned char buffer[32];

    if (argc != 2){
        usage();
    }
    
    fh = fopen(argv[1], "rb"); // fopen(file, mode);
    
    if (fh == NULL){
        fatal("Arquivo nao encontrado ou sem permissao de leitura.");
    }
    
    if (fread(buffer, 32, 1, fh) != 1){
        fatal("Nao foi possivel ler os 32 bytes do arquivo");
    }
    fclose(fh);

    if (!petest_ispe(buffer)){
        fatal("Arquivo nao parece ser um arquivo executavel PE.");
    }
    

    return 0;

}
