#include <stdio.h>

// 0 falso
// qualquer coisa diferente de 0 é verdadeiro

/*
 * Operadores bit a bit
 * 
 * Conjunção & (E, AND) -> verifica bit a bit de cada operando
 * 2 = 10 
 * 3 = 11
 *
 * 1 1 
 * 1 0
 * ---
 * 1 0 -> 2 em decimal
 *
 * Disjunção inclusivo | (OU, OR) -> verifica tbm bit a bit de cada operando
 * 1 0
 * 1 1
 * ---
 * 1 1 -> 3 em decimal
 *
 * Disjuncao exclusivo ^ XOR (OU, OR) -> verifica tbm bit a bit de cada operando
 * 1 0
 * 1 1
 * ---
 * 0 1 -> 1 em decimal
 *
 * Apenas retorna verdadeiro se uma das entradas for verdadeira 
 * 1 1 -> 0 e 1 0 -> 1
 *
 * Negação (NOT) ~ -> Inverte bit a bit de um operando
 * int a = 0;
 * ~a -> -1
 * 
 *
 *
 * Shift left <<
 * int a = 8;
 *
 * a << 1; -> Empurra para esquerda o valor bit a bit
 * do primeiro operando o numero de vezes equivalente 
 * ao valor do outro operando, ou seja, 
 *
 * 8 === 0b1000 -> 16 === 0b10000 
 *
 * a ideia é multiplicar pela base, assim como em decimal
 *
 * Shift right >>
 * int a = 8;
 *
 * a >> 1; -> Tem a msm ideia do shift left só que a
 * direita.
 *
 * 8 === 0b1000 -> 4 === 0b100;
 *
 * a ideia é dividir pela base, assim como em decimal
 *
*/


int main(void){
    int a = 2; 
    int b = 3; 
    // 0b -> para notação em binario, mas em decimal tbm serve
    int c = 0b00000000000000000000000000000000; // 4 bytes e 32 bits
    int d = 0b11111111111111111111111111111111; // -1 em decimal
    int e = 0b1000;

    printf("Operador dijuntivo exclusivo é: %d\n", a ^ b);
    printf("Operador dijuntivo inclusivo é: %d\n", a | b);
    printf("Operador de negação é: %d\n", ~c);
    printf("Operador shift left é: %d\n", e >> 1);


    return 0;
}


