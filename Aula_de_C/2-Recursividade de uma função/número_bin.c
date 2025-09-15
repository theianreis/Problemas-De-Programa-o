#include <stdio.h>

void binario(int n) {
    if (n > 1) {
        binario(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um número positivo.\n");
        return 1;
    }

    printf("O número %d em binário é: ", n);
    binario(n);
    printf("\n");

    return 0;
}