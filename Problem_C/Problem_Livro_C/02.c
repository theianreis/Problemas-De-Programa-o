/*
Descrição:
O computador escolhe um número entre 1 e 10 (fixo ou gerado aleatoriamente).
O usuário tenta adivinhar.
Você deve dizer se ele acertou, errou por 1 (muito perto) ou errou completamente.

Exemplo de entrada:
7 (número secreto: 6)
Saída esperada:
Quase! Você errou por 1.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int valor_para_adivi;

    printf("Digite um valor: \n");
    scanf("%d",&valor_para_adivi);

    srand(time(NULL));
    int number = rand()%11;

    printf("O computador escolheu %d\n", number);
    if (valor_para_adivi!=number)
    {
        printf("Errou");
    }else{
        printf("Acertou");
    }

    return 0;
}