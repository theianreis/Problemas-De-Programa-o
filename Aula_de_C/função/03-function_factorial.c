#include <stdio.h>


int factorial(int num){
    int result = 1;
    for(int i=1;i<=num;i++){
        result*=i;
    }
    return result;
}

int main(){
    int num;

    printf("Writing value: ");
    scanf("%d",&num);

    printf("The factorial of value %d is %d ",num,factorial(num));
    return 0;
}