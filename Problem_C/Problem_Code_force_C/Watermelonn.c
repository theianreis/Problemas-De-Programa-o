/*

Num dia quente de verão, Pete e seu amigo Billy decidiram comprar uma melancia. Escolheram a maior e mais madura, 
na opinião deles. Depois disso, a melancia foi pesada e a balança marcou w quilos. Correram para casa, morrendo de 
sede, e decidiram dividir a fruta, mas enfrentaram um problema difícil.

Pete e Billy são grandes fãs de números pares, por isso querem dividir a melancia de forma que cada uma das duas 
partes pese um número par de quilos, sem que seja obrigatório que as partes sejam iguais. Os meninos estão extremamente 
cansados e querem começar a refeição o mais rápido possível, por isso você deve ajudá-los e descobrir se eles conseguem 
dividir a melancia da maneira que quiserem. Com certeza, cada um deles deve receber uma parte de peso positivo.

Entrada
A primeira (e única) linha de entrada contém o número inteiro w ( 1 ≤  w  ≤ 100 ) — o peso da melancia comprada pelos meninos.

Saída
Escreva SIM , se os meninos conseguirem dividir a melancia em duas partes, cada uma delas pesando um número par de quilos; e NÃO no caso oposto.

*/

#include <stdio.h>

int main(){

    int w;

    printf("Balança:");
    scanf("%d",&w);

    if (w%2==0 && w>=4){
        printf("SIM\n");
    }else{
        printf("NÃO\n");
    }
    return 0;
}
