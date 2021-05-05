#include <stdio.h>
// a ideia é compilar este arquivo como main e 
// utilizar a variavel declarada em mod2 e atribuir
// valor dentro deste escopo, visto que utilizamos o extern.
// Tambem fazemos o call de uma funcao extern de mod2, que possui
// o mesmo nome de declaracao dentro de mod3 mas sua declaracao é static
// limitando o seu uso apenas ao mod3. Ou seja, compilamos um programa
// com arquivos linkados e utilizamos funcoes e varaveis externas.
// gcc -o progName mod1.c mod2.c mod3.c


int i = 10;

int main(void){
    printf("%d\n",i);
    funcao();
    printf("%d\n", i);
    return 0;
}
