// expontando funcoes e variaveis.
// por padrao o compilar nao iria parar o processo 
// por falta da declaracao do extern, mas mandaria warning

// extern -> para dar acesso em outro file.c a determinada funcao ou variavel

extern int i;

extern void inc_i(void){
    i++;
}

extern void funcao(void){

}
