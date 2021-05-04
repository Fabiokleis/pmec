#include <stdio.h>
#include <string.h>

// struct e union, a syntax segue a mesma para ambos

/*
 O struct é como se fose um JSON
 um object em javascript, ou um dicionario em python.

 O tamanho de um struct é definido assim como os arrays
 pela quantidade de bytes dos tipos declarados dentro dele,
 ou seja, sera definido char (1 bytes) + int (4 bytes), mas
 quando a quantidade de bytes se torna impar ela sera movida
 para uma unidade par, entao 5 bytes se tornao 8 bytes por struct

syntax:
Podemos criar e ja instancias as structs

struct name_of_struct {
    type name_of_variable;
    ...
} strutc1, struct2...;

ou apenas definir e chamar no main como abaixo

struc name{
    type name;
};

*/

struct st {
    unsigned char id;
    unsigned int numero;
    unsigned int onum;
};

int main(void){
    // declarando structs
    struct st s[10];
    struct st b = {'A', 10, 20}; // uma forma de declarar ja atribuindo
    struct st c = {.numero = 20, 10}; // id=0, numero=20 e onum = 10
    // declarando ponteiro para struct
    struct st *pb;
    pb = &b;

    // atribuindo com -> atraves de um ponteiro
    pb->id = 'B';
    pb->numero = 25;
    pb->onum = 10;
    
    printf("b.id = %c\n", pb->id); // assim nao precisamos passar o operador unario *
    printf("b.numero = %d\n", pb->numero);
    printf("b.onum = %d\n", pb->onum);

    //s[0].id = 3;
    //s[0].numero = 2021;

    printf("%d\n", sizeof(s)); 
    // 120 bytes pois um struct foi definido para 12 bytes
    // e existe 10 structs st contidos em s
    printf("%d\n", sizeof(struct st)); // 12 bytes
   
    for(int i = 0; i < sizeof(s)/sizeof(struct st); i++){
        (s+i)->id = i; // s[i].id == (*(s+i)).id == (s+i)->id = 
        (s+i)->numero = i+1; // s[i].id == (*(s+i)).numero == (s+i)->numero
        (s+i)->onum = i+2; // s[i].onum == (*(s+i)).numero == (s+i)->onum

        printf("s[%d].id = %d\n", i, s[i].id);

        printf("s[%d].numero = %d\n", i, s[i].numero);

        printf("s[%d].onum = %d\n", i, s[i].onum);
    }
    
    printf("\n"); 
    // memset to 0 all values of s[], como foi definido array nao precisa de &
    // se fosse apenas uma inicializacao em um unico struct ai sim teria o &
    // memset(&b, 0, sizeof(struct st/ b)); pois ele só é um struct
    // como aqui sao 10 structs, tem que passar o size todo 12 bytes * 10
    memset(s, 0, sizeof(s));
    
    for(int i = 0; i < sizeof(s)/sizeof(struct st); i++){
        printf("s[%d].id = %d\n", i, s[i].id);

        printf("s[%d].numero = %d\n", i, s[i].numero);

        printf("s[%d].onum = %d\n", i, s[i].onum);
       
    }
    return 0;
}
