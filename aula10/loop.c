#include <stdio.h>

// loops em C
// Se o gcc for mais antigo tem que compilar com flag

int main(void){
    
    unsigned int i = 0;

    printf("label com goto\n");
    // label
    imprimir:  
        printf("O valor de i é: %u\n", i);
        i++;
        // goto é um statement para mudar o fluxo do programa
        // neste caso apenas depois da condicional sera feito o
        // jmp para o proprio label.
        if (i < 3) goto imprimir;
  
     printf("------------------\n");
     // uma alternativa seria o loop for
     // que possui uma estrutura unica.
     // for(variavel; condicional; incrementador/descrementador){ operaçoes...};
     printf("for loop \n");
     // tipo int é implicito. unsigned int j = 0 == unsigned j = 0;
     for (unsigned int j = 0; j < 3; j++) {
        printf("O valor de j é: %u\n", j);
     };


    return 0;
}

