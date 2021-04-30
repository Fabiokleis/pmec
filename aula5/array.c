#include <stdio.h>

int main(void){
    long int c[3]; // numero de elementos

    // cada elemento dentro do array assim como variaveis possuem endereço e seu determinado tamanho
    // int => 4 bytes
    // char => 1 bytes...
    // Logo o array possui o numero de elementos e seu tamanho que consiste na soma dos bytes 
    // de cada elemento dentro do array
    printf("O tamanho de c é: %zu\n", sizeof c); // numero de bytes do array
    // para obter o numero de elementos a partir do tamanho do array:
    printf("O numero de elementos de c é: %zu\n", sizeof c / sizeof c[0]); // sizeof c / sizeof(long int)

    // adicionando valores
    c[0] = 'A';
    c[1] = 0x42;
    c[2] = 67;
    // outra maneira mais pratica
    int n[5] = {1, 2, 3, 4, 5};

    // acessando valores de um array.
    printf("O elementos 0 de c é: %d\n", c[0]);
    printf("O elementos 1 de c é: %d\n", c[1]);
    printf("O elementos 2 de c é: %d\n", c[2]);
    printf("O elementos 5 de c é: %d\n", c[5]); // endereço que nao existe

    printf("o endereço do array c em memoria %p\n", c);
    printf("o endereço do array &c em memoria %p\n", &c);
    printf("o endereço do primeiro elemento do array c em memoria %p\n", &c[0]);
    printf("o endereço do segundo elemento do array c em memoria %p\n", &c[1]);
    // o array aponta indiretamente para o endereço do primeiro elemento
    // & => ampersand operator. É um operador para acessar o endereço na memoria
    // logo &c[1] != c[1]

    return 0;
}
