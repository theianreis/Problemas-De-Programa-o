#include <stdio.h>


int function_sum(int a, int b){
    int result;

    result = a + b;

    return result;
}

int main(){
    int a , b;

    printf("Write first value: ");
    scanf("%d", &a);
    printf("Write second value: ");
    scanf("%d", &b);

    printf("The sum of two values is: %d",function_sum(a,b));
}