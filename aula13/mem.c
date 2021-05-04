#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// alocacao de memoria de forma dinamica
// stdlib -> biblioteca que contem funcoes de alocação de memoria

// tratando um possivel erro com o retorno de malloc
// funcao do tipo void pois estamos retornando um ponteiro void
void *malloc_s(size_t size){
    // recebemos o size com size_t
    // e entao criamos um ponteiro que pode apontar para qualquer tipo
    void *ptr;
    // tentamos alocar o size com malloc
    ptr = malloc(size);
    // verificamos a saída de malloc, se for nulo significa que nao tem memoriam
    if(ptr == NULL){
        // fprint -> formated print
        // stderr -> 2> saída padrao de erros
        fprintf(stderr, "memoria insuficiente\n");
        // exit -> é o return 1 da function main
        // ou seja, brecamos a continuiada da execucao do programa
        exit(1);
    }
    // caso tudo haja bem, entao retornamos o ponteiro p
    return ptr;
}
// uma solucao para nao utilizar uma funcao é fazer uma macro
#define MALLOC(ptr, size) { \
    ptr = malloc(size); \
    if(ptr == NULL) { \
        fprintf(stderr, "memoria insuficiente\n"); \
        exit(1); \
    } \
}

int main(int argc, char *argv[]){
    // malloc(bytes_para_serem_alocados) -> retorna o endereço da alocaçao
    // a ideia é alocar a quantidade de bytes equivalentes ao tipo de variavel
    // que sera armazenada.
    //
    // malloc(sizeof(int/char/...)); alocamos o numero de bytes de um tipo.
    // Toda memoria alocada precisa ser desalocada
    // Entao temos a funcao free();
    // free(endereço_da_variavel/ponteiro) -> desaloca da memoria o endereço passado
    //
    // realloca(ponteiro, novo_size) -> Realoca um endereço a alocado para um novo size
    //
    // da biblioteca string.h
    // memset(ponteir, number, size_a_ser_preenchido) -> filtra o ponteiro e seta um novo valor para cada byte


    int *p;
    // passamos nosso size para dentro de malloc_s
    // p = malloc_s(sizof(int));
    // ou com macro.
    //
    MALLOC(p, 5 * sizeof(int)); // alocou 5 * 4 bytes  == 20bytes
    // podemos mesmo tendo alocado apenas 20 bytes
    // alocar mais bytes em tempo de execucao, ou seja,
    // o limite estipulado em malloc foi passado e nao foi
    // gerado nenhum erro. Verificar erros com valgrind
    for(int i = 0; i < 5; i++){
        *(p+i) = i+3;
        printf("p[%d] = %d\n", i,*(p+i));
    }
    p = realloc(p, sizeof(int)*6);
    *(p+5) = 8;

    memset(p, 0, 6*sizeof(int)); // setando todos os valores dentro do p para 0

    for(int i = 0; i < 6; i++){
        printf("p[%d] = %d\n",i, *(p+i));
    }
    free(p);   

   
    return 0;
}
