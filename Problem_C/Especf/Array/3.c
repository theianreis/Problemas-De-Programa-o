/*
Problema 1 — Array Básico

Descrição:
Crie um programa em C que armazene 5 números inteiros em um array e 
mostre cada um deles na tela, um por linha, junto com seu índice no 
array.

Input:
(nenhuma entrada do usuário — valores definidos no próprio código)
*/

#include <stdio.h>

int main(){

    int array[] = {1,2,3,4,5};

    for(int i=0;i<5;i++){
        printf("Array[%d]= %d\n", i, array[i]);
    }

    return 0;
}

