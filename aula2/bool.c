#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool b;
    char c;

    c = 0; // false
    c = 1; // true

    // b = true;
    b = false;

    printf("o tamanho de b (bool) é: %lu\n", sizeof b);
    printf("o valor de b é: %i\n", b);

    return 0;
}