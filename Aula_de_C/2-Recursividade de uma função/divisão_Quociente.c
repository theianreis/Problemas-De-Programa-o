#include <stdio.h>

int quociente(int dividendo, int divisor){
    if(dividendo < divisor){
        return 0;
    } else {
        return 1 + quociente(dividendo - divisor, divisor);
    }
}

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

    printf("O valor da divisão %d / %d = %d e resto %d \n", dividendo, divisor, quociente(dividendo, divisor),resto(dividendo,divisor));
    return 0;
}