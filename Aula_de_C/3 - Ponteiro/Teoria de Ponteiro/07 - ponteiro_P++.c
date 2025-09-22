#include <stdio.h>

int main(){
    int v[5] = {10, 20, 30, 40, 50};
    int *p = v; // p aponta para o primeiro elemento do array

    printf("Valor inicial: %d\n", *p); // 10

    p++; // p agora aponta para o segundo elemento

    printf("Depois de p++: %d\n", *p); // 20

    return 0;
}