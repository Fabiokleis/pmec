#include <stdio.h>
#include <stdlib.h>

// ponteiros p2

int main(int argc, char *argv[]){
   // Os nome sao apenas convencoes
   // int argc -> count de args, numero de argumentos
   // char *argv[] || char **argv -> array de ponteiros para args, [0] => main.c
   int i;
   if (argc > 1){
       for(i = 0; i < argc; i++){
            printf("argv[%d] = %s address %p\n", i, argv[i], argv[i]);
       }
    }else{
        printf("nao foi passado nenhum argumento alem de %s\n", argv[0]);
    }

   // exemplo de alocao dinamica com o malloc alocando no heap
   // utilizando o valgrind para verificar...
   int *j = NULL;
   printf("j address: %p\n", j);
   j = malloc(sizeof (int)); // 4 bytes
    
   *j = 9;

   printf("j = %d, address %p\n", *j, j);
   free(j);
    
   return 0;
}
