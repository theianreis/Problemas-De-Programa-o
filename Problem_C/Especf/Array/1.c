/*
Leitura de Array
*/

#include <stdio.h>

int main(){

    int array[5];

    int length = sizeof(array)/sizeof(array[1]);

    for(int i=0;i<length;i++){
        scanf("%d",&array[i]);
    }
    
    for (int i=0; i<length;i++){
        printf("%d\n",array[i]);
    }
    

    return 0;
}