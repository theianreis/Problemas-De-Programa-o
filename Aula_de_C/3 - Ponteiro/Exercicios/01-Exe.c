#include <stdio.h>

int main(){

    float fpt;
    float variavel_1, variavel_2;

    float *p_fpt;

    p_fpt = &fpt;
    variavel_1 = 10.5;
    *p_fpt = variavel_1; 
    
    // Atribuir o valor de fpt (via ponteiro) a variavel_2
    variavel_2 = *p_fpt;

    printf("Valor apontado pelo ponteiro: %.2f\n", *p_fpt);
    printf("Valor de variavel_1: %.2f\n", variavel_1);
    printf("Valor de variavel_2: %.2f\n", variavel_2);
    printf("Endereço armazenado na varivael_1: %p\n", &variavel_1);
    printf("Endereço armazenado no ponteiro: %p\n", p_fpt);


    return 0;
}