#include <stdio.h>

int main(){

    int a,b,c,d;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    printf("Digite o quarto valor: ");
    scanf("%d", &d);

    int max = a;
    int min = a;

    //Comparação para encontrar o maior
    if(b>max) max = b;
    if(c>max) max = c;
    if(d>max) max = d;
    //Comparação para encontrar o menor
    if(b<min) min = b;
    if(c<min) min = c;
    if(d<min) min = d;

    printf("Maior valor: %d\n",max);
    printf("Menor valor: %d\n",min);
    
    return 0;
}