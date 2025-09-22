#include <stdio.h>

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int *pt = numeros; // Ponteiro para o primeiro elemento do array

    printf("Elementos do array usando ponteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(pt + i)); // Acessando os elementos usando o ponteiro
    }

    return 0;
}