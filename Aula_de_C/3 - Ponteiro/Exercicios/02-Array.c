/* informações:
Problema: Ler 5 números inteiros em um vetor e imprimir todos eles usando apenas ponteiros.
Input: 5 números inteiros digitados pelo usuário.
Caso necessário: Acesso aos elementos do vetor via *(p+i), onde p é um ponteiro para o vetor.
Output: Os 5 números digitados, exibidos na tela.
*/


#include <stdio.h>

void constructArray(int *index, int lengh){
    for (int i = 0; i<lengh;i++){
        *(index+i)= i +1;
    }
}

void printArray(int *index,int lengh){
    for (int i  = 0;i<lengh; i++){
        printf("%d ", *(index+i));
    }
    printf("\n");
}

int main(){
    int n = 5;
    int array[5];

    constructArray(array,n);
    printArray(array, n);

    return 0;
}