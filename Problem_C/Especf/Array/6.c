/* 
Maior Valor em Array

Descrição:
Escreva uma função em C chamada "maiorElemento" que receba um array de 5 números 
inteiros e retorne o maior valor. No `main`, leia 5 números do usuário, 
chame a função e mostre o maior elemento.

Input: 3, 7, 2, 9, 5

Output: Maior elemento = 9
*/

#include <stdio.h>

int maiorElemento(int array[5]) {
    int maior = array[0]; 
    for (int i = 1; i < 5; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }
    return maior;
}

int main() {
    int numeros[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    int resultado = maiorElemento(numeros);
    printf("Maior elemento = %d\n", resultado);

    return 0;
}
