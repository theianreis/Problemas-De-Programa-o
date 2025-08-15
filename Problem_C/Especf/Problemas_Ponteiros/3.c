/*
Modelo:Crie um código que troque os valores de duas variáveis usando ponteiros. COM FUNÇÂO
*/

#include <stdio.h>

void swap(int *pa,int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(){
    int a = 0, b=1;
    
    swap(&a,&b);

    if (a==0)
    {
        printf("Não houve troca");
    }
    else{
        printf("Valores depois da troca: a=%d, b=%d",a,b);
    }
    


    return 0;
}