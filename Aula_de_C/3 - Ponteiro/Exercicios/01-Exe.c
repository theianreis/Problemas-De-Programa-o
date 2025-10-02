/* informações:
Problema: Declarar uma variável inteira, um ponteiro para inteiro e exibir o valor, 
          o endereço e o valor acessado via ponteiro.
Input: Nenhum (valor da variável é fixo no código).
Caso necessário: Não há fórmula matemática.
Output: Valor da variável, endereço de memória e valor acessado pelo ponteiro.
*/

#include <stdio.h>


int main(){
    int variable;
    int *p;

    printf("write a value: ");
    scanf("%d", &variable);

    p = &variable; 

    printf("X values: %d",variable);
    printf("\nX address: %p",&variable);
    printf("\nValue accessed by: %d",*p);

    return 0;
}