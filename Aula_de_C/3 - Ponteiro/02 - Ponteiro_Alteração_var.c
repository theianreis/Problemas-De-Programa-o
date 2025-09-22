/*
Alterando o valor de uma variável usando um ponteiro
*/

#include <stdio.h>

int main(){
    int valor = 20;
    int *pt_valor = &valor;
    
    printf("Valor antes da alteração %d\n", valor);

    *pt_valor = 50; // Altera o valor da var com o ponteiro

    printf("Valor após a alteração %d\n", valor);

    return 0;
}