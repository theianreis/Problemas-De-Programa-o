#include <stdio.h>

void alterarValor(int *ptr) {
    *ptr = 100; // Alterando o valor da variável apontada
}

int main() {
    int numero = 50;

    printf("Antes da função: %d\n", numero);

    alterarValor(&numero); // Passando o endereço da variável para a função

    printf("Depois da função: %d\n", numero);

    return 0;
}