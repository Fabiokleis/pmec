#include <stdio.h>
#include <string.h>

// strutc e union, tem a msm syntax
/*
 Diferente do struct o union nao incrementa o size
 conforme vamos criando campos, ele tem o size
 do maior campo definido.
 E quando fazemos atribuiçoes e armazenamos valores
 dentro de um union um valor pode afetar outro
 pois sao compartilhados os mesmos bytes de memoria
 diferente do struct
*/

union st {
    unsigned char id;
    unsigned int numero;
};

int main(void){
    union st s;
    s.numero = 2017;

    // zuera
    s.id = 0xe2;
    printf("%d\n", sizeof(s)); // 4 bytes
    printf("s.num: %d\n", s.numero); 
   
    return 0;

}
