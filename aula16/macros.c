#include <stdio.h>
#define MSG "Mensagem padrao"
#define SIZ 512
#define QUAD(x) (x*x)
#define MAX(x, y) (x > y ? x : y)
#define MAX3(x, y, z) (MAX(MAX(x,y), MAX(y,z)))
#define DEBUG 1
// #undef -> para remover a macro
#define VAR(x) printf("A variavel "#x" tem o valor: %d\n", x);
// #x -> pega o nome da variavel


//#include "f.h"
int main(void){
    /* imprime("ola, mundo!"); -> vindo do f.h
    const char *msg = "Mensagem padrao";
    char buff[SIZ] = { 0 };
    printf("Digite algo: ");
    scanf("%s", &buff);    
    printf("%d\n", QUAD(8));
    printf("%d\n", MAX3(3, 9, 41));
    */

    int cnt = 90;

// condicionais com macros
#ifdef DEBUG
     printf("date: %s: time:%s estou na linha %d\n", __DATE__, __TIME__, __LINE__); // macros de stdio.h
     VAR(cnt);
#endif

    return 0;
}
