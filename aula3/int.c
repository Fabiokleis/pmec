#include <stdio.h>

// make char para compilar 

int main(void){
    int i;

    printf("o tamanho de i (int) é: %zu bytes / %zu bits\n", sizeof i, sizeof i*8);
    printf("valor de i: %d\n", i);
   
    return 0;
}