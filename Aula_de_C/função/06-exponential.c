#include <stdio.h>
#include <math.h>  

int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){ // Corrigido: i <= num
        result *= i;
    }
    return result;
}

double exponential(double X, int N){
    double e = 0.0;
    for(int i = 0; i < N; i++){  
        e += (pow(X, i) / factorial(i));
    }
    return e;
}

int main(){ 
    int N;
    int X;
    double e = 0.0;

    printf("Digite o número de termos para a série de Euler: ");
    scanf("%d", &N);
    printf("Digite o valor de X: ");
    scanf("%d", &X);

    e = exponential(X ,N); // Corrigido: armazena o valor retornado

    printf("O valor aproximado de e^%d com %d termos é: %.15lf\n", X, N, e);

    return 0;
}