#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // Alocando memória dinamicamente
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializando e exibindo os valores
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
        printf("Elemento %d: %d\n", i, ptr[i]);
    }

    // Liberando a memória alocada
    free(ptr);

    return 0;
}