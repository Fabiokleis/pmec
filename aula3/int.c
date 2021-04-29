#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

// make int para compilar 

int main(void){
    // ler arquvios de header limits.h e stdint.h
    // int i; 
    // short i; 
    // long i;
    // long long i;
    // size_t i;
    register int i = 0; // aloca no registrador do processador, normalmente utiliza em loops como contador
        
    printf("o tamanho de i (int) é: %zu bytes / %zu bits\n", sizeof i, sizeof i*8);
    printf("valor de i: %d\n", i); 
    
    // sizeof int => 4 bytes e 32 bits i ou d
    // sizeof short => 2 bytes 16 bits i ou d
    // sizeof long => 8 bytes 64 bits lu
    // sizeof long long => 8 bytes 64 bits llu
    // sizeof size_t => 8 bytes 64 bits zu 

    return 0;
}
