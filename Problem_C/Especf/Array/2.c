/*
Soma de elementos de uma array
*/

#include <stdio.h>

int main(){

    int sum = 0;
    int array[5];


    printf("\n Enter the array elements: \n");

    for(int i=0;i<5;i++){
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("Sum = %d \n", sum);

    return 0;
}