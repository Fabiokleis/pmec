#include <stdio.h>
#include <stdlib.h>

// funcoes em C
// funcoes podem ou nao reeber argumetos e 
// podem ou nao retornarem um resultado
// tambem possuem endereço na memoria e
// podemos utilizar ponteiros.
/*
    syntax:
    tipo_retorno nome(tipo_arg nome_arg, tipo_arg2 nome_arg2){
        return valor_do_tipo_de_retorno_da_funcao;
    }
*/

// funcao que nao tem retorno
// char *msg == char msg[]
void msgReturn(char *msg){
    // fprintf() -> nos permite mandar uma string para uma saida
    // stdout -> saida padrao > || >> || 1> || 1>>
    // stderr -> saida de erro 2> || 2>>
    fprintf(stderr, "ERRO: %s\n", msg);
    exit(1);
}
// funcao simples de soma
int soma(int n1, int n2, int n3){
    int res = n1 + n2 + n3;
    return res;
}

int main(void){
    int num1, num2, num3, result;

    // scanf -> recebe da entrada padrao stdin e guarda num endereço de memoria o valor capturado
    printf("num1> ");
    scanf("%d", &num1);
    printf("num2> ");
    scanf("%d", &num2);
    printf("num3> ");
    scanf("%d", &num3);
   
    result = soma(num1, num2, num3);
    if(result < 0)
        msgReturn("sua soma retornou um numero negativo");
    

    printf("soma: %d\n", result);
    printf("o endereço de soma é: %p\n", soma);

    return 0;
}
