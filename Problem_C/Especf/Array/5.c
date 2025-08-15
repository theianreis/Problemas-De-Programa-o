/* 
Soma dos Elementos

Descrição:
Escreva um programa em C que leia 5 números inteiros informados pelo 
usuário, armazene-os em um array e calcule a soma de todos os elementos.

Input: 2,4,6,8,10

Output: Soma = 30
*/

#include <stdio.h>

int main(){

    int array[]={2,4,6,8,10};
    int soma = 0;
    int length = sizeof(array)/sizeof(array[0]);

    //Soma
    for(int i=0;i<length;i++){
        soma += array[i];
    }

    printf("%d\n",soma);

    return 0;
}