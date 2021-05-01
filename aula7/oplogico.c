#include <stdio.h>

// operaçoes logicas
/* 
 * Conjuncao (E, AND) &&
 * 0 0 -> 0 (falso)
 * 0 1 -> 0 (falso)
 * 1 0 -> 0 (falso)
 * 1 1 -> 1 (verdadeiro)
 *----------------------------*
 * Disjuncao (OU, OR) ||
 * 0 0 -> 0 (falso)
 * 0 1 -> (verdadeiro)
 * 1 0 -> (verdadeiro)
 * 1 1 -> (verdadeiro)
 *
 * Outros operadores
 * >, <, ==, !=, >=, <=
 *
*/


int main(void){
    int a = 8;
    int b = 8;

    printf("O resultado é: %d\n", !(a != b) && b == 8);
   
    return 0;
}
