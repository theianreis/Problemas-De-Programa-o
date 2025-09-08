#include <stdio.h>
#include <math.h>

int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}

double expan_sin(double X, int N){
    double s = 0.0;
    int sign = 1;
    for(int k = 0; k < N; k++){
        s += sign * pow(X, 2*k+1) / factorial(2*k+1);
        sign *= -1;
    }
    return s;
}

int main(){
    int N;
    double X;
    printf("Digite o número de termos para a série de Taylor: ");
    scanf("%d", &N);
    printf("Digite o valor de X (em radianos): ");
    scanf("%lf", &X);

    double resultado = expan_sin(X, N);

    printf("O valor aproximado de sin(%.2lf) com %d termos é: %.15lf\n", X, N, resultado);

    return 0;
}