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

double calcular_cos(double x, int n) {
    if (n == 0) {
        return 1; 
    } else {
        int expoente = 2 * n; 
        double termo = pot(x, expoente) / fatorial(expoente); 
        if (n % 2 == 0) {
            return termo + calcular_cos(x, n - 1); 
        } else {
            return -termo + calcular_cos(x, n - 1); 
        }
    }
}

int main() {
    double x;
    int n;

    printf("Digite o valor de X (em radianos): ");
    scanf("%lf", &x);
    printf("Digite o número de termos da série: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O número de termos deve ser maior que zero.\n");
        return 1;
    }

    double resultado = calcular_cos(x, n - 1); 
    printf("O valor aproximado de cos(%.2lf) com %d termos é: %.6lf\n", x, n, resultado);

    return 0;
}