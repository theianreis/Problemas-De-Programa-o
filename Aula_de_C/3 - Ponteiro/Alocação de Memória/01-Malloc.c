#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int*) malloc(5 * sizeof(int)); // aloca espaço para 5 inteiros
    
    if (p == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    p[0] = 10;
    p[1] = 20;

    printf("%d %d\n", p[0], p[1]);

    free(p); // libera a memória
    return 0;
}
