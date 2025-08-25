/*
Problema:
Leia um número inteiro e determine se ele é par ou ímpar.
Repita o processo até que o usuário digite o valor 0.

input:
Vários números inteiros digitados pelo usuário.

output:
Para cada número, imprimir se ele é par ou ímpar.
O programa encerra quando o usuário digitar 0.
*/

#include <stdio.h>

int main(){


    int num;

    do
    {
       if (num!=0){ 
            
            printf("Digite um valor inteiro: \n");
            scanf("%d",&num);

            if(num%2==0){
            printf("Esse valor é par\n");
            }
            else{
            printf("Esse valor é ímpar\n");
            }
    }
    }while(num!=0);

    printf("Programa encerrado.\n");


    return 0;
}