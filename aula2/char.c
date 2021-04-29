#include <stdio.h>

// make char para compilar 

int main(void){
    // unsigned positivo ate 255 e signed ate 127 positivo
    signed char c;
    
    printf("o tamanho de c (char) é: %lu bytes / %lu bits\n", sizeof c, sizeof c*8);

    // 256 overflow em ambos
    c = 127; // max para positivos com sinal

    // representações 
    c = 10; 
    c = 0xa;
    c = '\n';
    


    printf("valor de c: %i\n", c);


    return 0;
}