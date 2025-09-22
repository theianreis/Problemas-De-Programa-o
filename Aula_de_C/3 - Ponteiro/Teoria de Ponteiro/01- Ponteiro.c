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
    printf("Valor de variavel_2: %.2f\n", variavel_2);
    printf("Endereço armazenado do variavel_1: %p\n", (void*)&variavel_1);
    
    // Imprimir o endereço de variavel_2
    printf("Endereço de variavel_2: %p\n", (void*)&variavel_2);

    return 0;
}