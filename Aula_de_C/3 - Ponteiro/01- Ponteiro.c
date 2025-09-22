#include <stdio.h>

int main(){
    int valor = 10;
    int *pt_valor;

    pt_valor = &valor;

    printf("Valor da variável: %d\n", valor);
    printf("Endereço da variável: %p\n", &valor);
    printf("Valor armazenado no ponteiro: %p\n", pt_valor);
    printf("Valor apontado pelo ponteiro: %d\n", *pt_valor);

    return 0;
    
}