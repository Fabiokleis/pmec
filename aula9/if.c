#include <stdio.h>

int main(void){
    int a = 359;
    
    // == -> igualdade
    // = -> atribuição
    // if(expressao){
    //     operacao 1;
    //     operacao 2;
    //     ...
    // }
    // ou
    // if(expressao)
    //     apenas uma operacao;
    //
    //
    // Da mesma forma para o else
    
    if(-1 == a && a > 400){
        int chave = 3;
        printf("chave: %d\n", chave);
    }else if(a == 359){
        puts("a === 359\n");
    }else{
        printf("avaliacao falsa \n");
        puts("nova funcao!");
    }

    // ternario
    (a == 3) ? puts("3") : puts("nao sei o valor de a");

    printf("a: %d\n", a);
    return 0;
}
