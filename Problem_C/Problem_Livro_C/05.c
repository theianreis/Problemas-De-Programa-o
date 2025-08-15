/*
O usuário digita um número de 3 dígitos, e o programa mostra a soma dos dígitos, como:

Entrada: 382
Saída: Soma dos dígitos: 3 + 8 + 2 = 13
*/

#include <stdio.h>

int main(){
    int num;

    printf("Digite um número de 3 dígitos: ");
    scanf("%d",&num);

    if (num<100||num>999)
    {
        printf("Número inválido\n");
    }

    int cent = num/100;
    int dez = (num/10)%10;
    int unid = num %10;
    int soma = cent +dez+unid;

    printf("Soma dos dígitos: %d+%d+%d=%d\n",cent,dez,unid,soma);

    return 0;
    
}