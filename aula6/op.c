#include <stdio.h>

/*
 * = atribuição
 * + - unarios
 * + - binarios (adicao e subtracao)
 * * / (multiplicacao e divisao)
 * % (resto da divisao)
 * ++ (incremento)
 * -- (decremento)
*/

int main(void){
    int a;

    a = (4 + 2) * 3; // precedencia de operadores

    printf("%d\n", ++a);

    // incrementadores etc...
    // a = a + 1;
    // a += 1;
    // a++;
    // a -= 1;
    // a *= 8;
    // a = a / 8;

    // a = 10.0f / 3 -> 3.33333 // 10 / 3 -> 3
    // para que ocorra a divisao e seja salvo o numero flutuante
    // pelo menos um operando deve ser explicitamente float
    // se nao sera feita a divisao inteira

    // a++ != ++a
    // a++ -> Pós incremento
    // ++a -> Pré incremento

    return 0;
}
