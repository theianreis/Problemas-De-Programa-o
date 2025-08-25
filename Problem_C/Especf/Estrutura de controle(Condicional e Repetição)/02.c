/*
Problema:
Leia um número inteiro positivo N e imprima sua tabuada de 1 a 10.
Se o número for negativo, peça outro número até ser fornecido um valor válido.

input:
Um número inteiro positivo N.

output:
A tabuada de N de 1 até 10.
*/

#include <stdio.h>

int main(){
    
    int N;

    printf("Digite um valor N: \n");
    scanf("%d", &N);

    for(int i =0 ;i<=10;i++){
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
