/*
Modelo:
Crie uma função que receba dois ponteiros para inteiros e armazene a 
soma deles em uma terceira variável (também via ponteiro).
*/

#include <stdio.h>


void sum(int *a,int *b,int *res){
    *res = *a + *b;
}

int main(){
    int x,y,soma=0;

    printf("Digite um valor para soma: ");
    scanf("%d",&x);
    printf("Digite o segundo valor para soma: ");
    scanf("%d", &y);

    sum(&x,&y,&soma);

    printf("Soma: %d",soma);

    return 0;
}