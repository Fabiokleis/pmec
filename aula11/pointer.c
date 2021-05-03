#include <stdio.h>
#include <stdbool.h>

// ponteiros em C
void imp(char *s){
    // a cada iteracao é somado 1 byte e o caractere respectivo é printado.
    // a ordem de precedencia do ++ é superior a do operador para ponteiro *
    // ou seja, primeiro é resolvido o incremento e em seguida é retornado
    // o valor.
    while(*s)
        printf("%c\n",*s++);
};

int main(void){
    printf("O size de um ponteiro sempre é %zu bytes, independente de seu tipo...\n", sizeof(int *));
     
    char s[] = "texto"; // ['t', 'e', 'x', 't', 'o', '\0'];
    int a[] = {3, 2, 7, 4, 5}; // array de inteiros
    int b = 20;
    int *ponteiro; // declaracao de um ponteiro inicializa com o type *varname, type* varname ou type * varname;
    // int *bp = &b; -> int *bp; bp = &bp;
    int *bp = &b; // o bp esta apontando para o endereço de memoria de b    
    ponteiro = a; // é criado um array com os valores de a

    printf("o endereco do primeiro elemento de a é: %p\n", &a[0]);
    printf("o endereco de a em memoria é: %p\n", &a); // %p -> instrucao para ponteiro na printf
    printf("o endereço em memoria da variavel b é: %p\n", bp); // ou o prorio &b
    printf("o valor contido dentro do endereço na memoria de a[2] é: %d\n", *(ponteiro+2)); // somando bytes e retornando o valor 

    
    // percorrendo arrays com ponteiros

    int i, *ptr[5]; // criando um array de ponteiros

    for (i = 0; i < 5; i++){
        ptr[i] = &a[i]; // recebendo cada endereço dentro do array de ponteiros
        printf("ptr[%d] = &a[%d]\n", i, i);
    };

    for (i = 0; i < 5; i++){
        printf("Valor de ptr[%d] = %d\n", i, *ptr[i]);
    };
    // neste exemplo o ponteiro é um array com todos os elementos de a
    // ou seja, ele é um ponteiro para um array.
    for (i = 0; i < 5; i++){
        // *(ponteiro+1) != *ponteiro+1
        // a cada iteracao ha uma incrementacao no endereço e seu valor é retornado.
        printf("Valor de ponteiro[%d] = %d\n", i, *(ponteiro+i));
    };

    imp(s);

    return 0;
}
