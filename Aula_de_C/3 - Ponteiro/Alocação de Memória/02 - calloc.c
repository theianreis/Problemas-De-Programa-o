#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int*) calloc(5, sizeof(int)); // aloca espaço para 5 inteiros inicializados em 0
    
    if (p == NULL) {
        printf("Erro de alocação!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", p[i]); // imprime 0 0 0 0 0

    free(p);
    return 0;
}
