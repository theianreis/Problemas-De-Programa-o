#include <stdio.h>

int resto(int dividendo, int divisor){
    if(dividendo < divisor){
        return dividendo;
    } else {
        return resto(dividendo - divisor, divisor);
    }
}

int main(){
    int dividendo, divisor;
    printf("Digite o valor do dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o valor do divisor: ");
    scanf("%d", &divisor);

    printf("O resto da divisão %d / %d = %d\n", dividendo, divisor, resto(dividendo, divisor));
    return 0;
}