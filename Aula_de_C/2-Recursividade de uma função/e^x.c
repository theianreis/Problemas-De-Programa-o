#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

double pot(double base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * pot(base, exp - 1);
    }
}


double calcular_ex(double x, int n) {
    if (n == 0) {
        return 1; 
    } else {
        return (pot(x, n) / fatorial(n)) + calcular_ex(x, n - 1); 
    }
}

int main() {
    double x;
    int n;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);
    printf("Digite o número de termos da série: ");
    scanf("%d", &n);

    double resultado = calcular_ex(x, n);
    printf("O valor aproximado de e^%.2lf com %d termos é: %.4lf\n", x, n, resultado);

    return 0;
}