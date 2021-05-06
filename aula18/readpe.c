#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// projeto readpe
// brincando um pouco com FILE e funcoes para arquivos



void fatal(char *msg){
    fprintf(stderr, "%s\n", msg);
    exit(1);
}
void usage(void){
    printf("Uso:\n\treadpe <arquivo.exe>\n");
    exit(1);
}

bool ispe(const unsigned char *b){
     return (b[0] == 'M' || b[1] == 'Z'); // 'M' == 0x4d e 0 'Z' == 0x5a
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

    if (!ispe(buffer)){
        fatal("Arquivo nao parece ser um arquivo executavel PE.");
    }
    

    return 0;

}
