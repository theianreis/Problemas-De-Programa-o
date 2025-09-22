#include <stdio.h>

int main(){
    int v[5] = {10, 20, 30, 40, 50};
    int *p = v; // p aponta para o primeiro elemento do array

    printf("Valor atual: %d\n", *p); // 10
    printf("Valor retornado por (*p++): %d\n", (*p++)); // 10, depois p aponta para o próximo elemento
    printf("Valor após (*p++): %d\n", *p); // 20

    return 0;
}