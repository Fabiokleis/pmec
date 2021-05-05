#include <stdio.h>

int i;

void funcao(void){
    int i;

    for(i = 0; i < 3; i++){
        printf("%d\n", i);
    }
}

int main(void){
    funcao();

    return 0;
}
