#include <stdio.h>
#include <math.h>

int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}

int expans_cos(double X, int N){
    double s = 0.0;
    int sign=1; 

    for(int i = 0;i<N;i++){
        s += sign*pow(X,2*i)/factorial(2*i);
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

    double resultado = expans_cos(X, N);

    printf("O valor aproximado de cos(%.2lf) com %d termos é: %.15lf\n", X, N, resultado);

    return 0;
}