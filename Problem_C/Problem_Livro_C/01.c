/*
O usuário entra com um número inteiro positivo.
Você deve exibir se ele é par ou ímpar, e se é divisível por 3 ou por 5.

Exemplo de entrada:
15
Saída esperada:
Ímpar e divisível por 3 e por 5
*/

#include <stdio.h>

int main(){

    int number;

    printf("add number: ");
    scanf("%d",&number);

    if(number%2==0){
        printf("pair");
    }else
    {
        if (number%3==0 && number%5==0)
        {
            printf("odd ,and divisible for 3 and 5");
        }
        
    }
    

    return 0;
}