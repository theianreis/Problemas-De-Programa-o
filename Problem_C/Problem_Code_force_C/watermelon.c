#include <stdio.h>

int main(){

    int w;

    printf("Balança:");
    scanf("%d",&w);

    if (w%2==0 && w>=4){
        printf("SIM\n");
    }else{
        printf("NÃO\n");
    }
    return 0;
}