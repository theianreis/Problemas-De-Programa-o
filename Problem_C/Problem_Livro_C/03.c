/*
Descrição:
Peça um ano ao usuário.
Escreva um programa que determine se o ano é bissexto.

Regras:

É bissexto se é divisível por 4 e (não por 100 ou é divisível por 400)
*/

#include <stdio.h>

int main(){

    int ano;

    printf("Digite um ano: ");
    scanf("%d",&ano);

    if((ano%4==0 && ano% 100 != 0)||(ano%400==0)){
        printf("%d é bissexto",ano);
    }else{
        printf("%d não é bissexto",ano);
    }

    return 0;
}