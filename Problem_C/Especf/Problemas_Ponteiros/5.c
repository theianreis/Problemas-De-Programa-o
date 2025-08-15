/*
Crie um código que use ponteiros para percorrer um vetor de inteiros e imprimir seus elementos.
*/

#include <stdio.h>

void imprimir(int *v, int len){
    printf("Elementos de um vetor:\n ");
    for(int i = 0;i<len;i++){
        printf("%d\n",*(v+i));
    }
}

int main(){
    int v[]={1,2,2,3};
    int len_v = sizeof(v)/sizeof(v[0]);

    imprimir(v,len_v);
    return 0;
}