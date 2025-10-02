/* informações:
Problema: Criar uma função que receba dois inteiros e retorne a soma deles.
Input: Dois números inteiros.
Output: O valor da soma.
*/

#include <stdio.h>

int functionSum(int a, int b){
    int sum = a + b;

    return sum;
}

int main(){
    int value1 , value2;

    printf("Write firts value: ");
    scanf("%d",&value1);

    printf("Write second value: ");
    scanf("%d",&value2);

    printf("The sum in the values is: %d",functionSum(value1,value2));


    return 0;
}