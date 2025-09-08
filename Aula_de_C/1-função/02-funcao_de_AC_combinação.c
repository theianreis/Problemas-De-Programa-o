#include <stdio.h>

int factorial(int n){
    int resultado = 1;
    for (int i = 1; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){
    int N, P;

    printf("Digite o valor de N: ");
    scanf("%d", &N);
    printf("Digite o valor de P: ");
    scanf("%d", &P);

    if (P > N){
        printf("Valores inválidos. Lembre-se que P ≤ N e ambos ≥ 0.\n");
        return 0;
    }

    int resultado = factorial(N) / ( factorial(P) * factorial(N - P) );

    printf("C(%d, %d) = %d\n", N, P, resultado);

    return 0;
}
