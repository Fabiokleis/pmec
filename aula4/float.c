#include <stdio.h>

int main(void){
    float f = 40.333333; // 1 * 10^2 === 1e2
    long double d = 1; 

    printf("O tamanho de f (float): %zu bytes / %zu bits\n",sizeof f, sizeof f * 8);
    printf("O tamanho de d (long double): %zu bytes / %zu bits\n",sizeof d, sizeof d * 8);
    printf("o valor de f: %.2f\n", f); // %.1f para setar a quantidade de digitos depois do ponto flutuante
   
    // float => 4 bytes / 32 bits
    // double => 8 bytes / 64 bits
    // long double => 16 bytes / 128 bits
    
    return 0;
}
