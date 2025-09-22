#include <stdio.h>

double serie_harmonica(int n) {
    if (n == 1) {
        return 1.0; 
    } else {
        return 1.0 / n + serie_harmonica(n - 1); 
    }
}

int main() {
    int n;
    printf("Digite o número de termos da série harmônica: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O número de termos deve ser maior que zero.\n");
        return 1;
    }

    double resultado = serie_harmonica(n);
    printf("A soma da série harmônica com %d termos é: %.4lf\n", n, resultado);
    return 0;
}