/*
Modelo:
## Dada uma variável do tipo int, crie um código que utilize um ponteiro para acessar e imprimir seu valor.

##Ideias para variações:
    -Use float, char, double em vez de int
    -Imprima o valor original e o valor via ponteiro
    -Use scanf para entrada do valor
*/ 

#include <stdio.h>

int main(){

    int var=10;
    int *p;
    
    p = &var;

    printf("O valor de var é %d",*p);

    return 0;
}
