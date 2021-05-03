#include <stdio.h>
#include <stdbool.h>
// loops em C - part 2
// Se o gcc for mais antigo tem que compilar com flag

int main(void){
      /*
     unsigned int j = 0;
     for ( ; ; ) {
        printf("O valor de j é: %u\n", j++);
        if (j > 2) 
            break;
     };

     tambem é possivel modificar syntax do for
     para dentro do proprio escopo.
     quando removemos a condicional e nao declaramos
     criamos um loop infinito.

     break -> é um statement para quebrar o fluxo do programa,
     ou seja, podemos cancelar determinadas execuçoes.
     continue -> é um statement que tem a funcao contraria do
     break, ou seja, permite a execucao do fluxo.
    
     for(unsigned int i = 0; i < 3; i++){
         printf("O valor de j é: %u\n", i);
     };

    */
    
    // loop while  
    /* 
     * syntax:
     *
     * while(condicional){
     *  operaçoes...
     * }
     *
     * Assim como o loop for setamos uma condicional,
     * ou seja, tambem podemos criar um loop infinito
     * apenas setando para true a condicional
     * while(1){ operaçoes...};
     * while(true){...}; <stdbool.h>
     *
     * tbm permite a formatacao sem chaves quando
     * ha apenas uma operacao
    */

     unsigned int i = 0;
     while(i < 3){
         printf("o valor de i é: %u\n", i++);
     };


    // loop do while
    /* syntax:
     *
     *  do {
     *      operacoes;
     *  }while(condicional);
     *
     * A ideia do loop (do while) é executar o primeiro
     * ciclo de operacoes antes da comparacao, ou seja,
     * temos uma chamada da funcao printf com o incrementador
     * e só entao verificamos o valor de j.
     * 
     * tbm permite a formatacao sem chaves quando ha apenas
     * uma operacao
    */
    unsigned int j = 0;
    do{
        printf("o valor de j é: %u\n", j++);
    }while(j < 3);


    return 0;
}


