/*
Array Invertido

Descrição:
Escreva um programa em C que leia 5 números inteiros informados pelo 
usuário, armazene-os em um array e, em seguida, mostre esses números 
na ordem inversa da entrada.

Input: 10,20,30,40,50

Output: 50,40,30,20,10
*/

#include <stdio.h>

int main(){

    int array[]={10,20,30,40,50};
    int lenght = sizeof(array)/sizeof(array[1]);

    for(int i = lenght-1; i>=0;i--){
        printf("%d\n",array[i]);
    }

    return 0;
}