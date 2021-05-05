#include <stdio.h>


void funcao(void){
    register int i; 
    /*
     variaveis static

     Quando a funcao for chamada outra vez, normalmente 
     a variavel seria redeclarada, mas neste caso pois ser
     static ela mantem o mesmo valor ja incrementado da primeira
     chamada na funcao main.
     
     static int i = 0; // definida apenas uma vez
     auto int i = 0; // definida com um novo valor
     register int i = 0; // definida com um novo valor dentro de um registrador

    */
    for(i = 0; i < 3; i++){
        printf("%d\n", i);
    }

   }

int main(void){
    funcao();
    funcao();
    funcao();
    return 0;
}
