/*
Modelo:Crie um código que troque os valores de duas variáveis usando ponteiros.
*/

#include <stdio.h>

int main(){
    //Declarando e atribuindo valores as variáveis
    int a = 1;
    int b = 2;

    //Definindo ponteiros
    int *pa=&a;
    int *pb=&b;

    printf("Valores antes da troca: a = %d , b =%d",a,b);

    //Realizando o swap
    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("Valores da troca: a = %d b = %d",a,b);

    return 0 ;
}