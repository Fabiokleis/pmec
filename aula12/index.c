#include <stdio.h>
#include <stdlib.h>
#define TAM 8
enum { PEAO=1, CAVALO=3, BISPO=3, TORRE=5, DAMA=9, REI };

// gerando um tabuleiro com indexacao de arrays bidimensionais as matrizes

int main(int argc, char *argv[]){
    // testes...
    char s[] = {'P', 'M', 'E', 'C'};
    char name[5] = "fabio";

    for(int i = 0; i < sizeof(s)/sizeof(char); i++){
        // s[i] == *(s+i) == *(i+s) == i[name];
        printf("s[%d] => %c\n", i, s[i]);
    }

    printf("\n\n");
    
    for(int i = 0; i < 5; i++){
        // name[i] == *(name+i) == *(i+name) == i[name];
        printf("name[%d] => %c\n", i, name[i]);
    }
    putchar('\n');

    // brincando com tab
    
    // matriz com array
    //  |-> linha
    //  |  |-> coluna
    // [8][8]
   
    int pecas[TAM] = { TORRE, CAVALO, BISPO, DAMA, REI, BISPO, CAVALO, TORRE };
    int tab[TAM][TAM] = { 0 };

    // *(*tab) -> tab[0][0]
    // *(*(tab+1)) -> tab[0][1];
    // *(*(tab+1)) -> tab[1][0];
    // *(*(tab+1)+1) -> tab[1][1];
    // etc
    printf("gerando tabuleiro 8x8!\n\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){

            *(*(tab)+j) = *(pecas+j); // tab[0][j] == *(*(tab)+j) 
            *(*(tab+1)+j) = PEAO; // tab[1][j] == *(*(tab+1)+j)
            *(*(tab+6)+j) = PEAO; // tab[6][j] == *(*(tab+6)+j)
            *(*(tab+7)+j) = pecas[j]; // tab[7][j] == *(*(tab+7)+j)
            printf("[%d][%d] = %d ", i, j, *(*(tab+i)+j)); // tab[i][j] == *(*(tab+i)+j)

            if(j == TAM - 1) 
                putchar('\n');
        }
    }

    return 0;
}
