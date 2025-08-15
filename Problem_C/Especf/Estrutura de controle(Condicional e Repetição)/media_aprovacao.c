#include <stdio.h>

int main(){
    float media, valores;
    int contador;
    char add_values;

    do{
        //Entrada de valores 
        printf("Digite um valor: ");
        scanf("%f",&valores);

        //acumulador de valores
        media+=valores;
        //contar quantos valores foram adicionados
        contador++;
        
        while ((getchar()) != '\n');

        printf("Deseja continuar: ");
        scanf("%c",&add_values);

        while ((getchar()) != '\n');
    }while(add_values == 's'|| add_values == 'S');

if (contador > 0)
{
    media /= contador;
    printf("A média dos valores digitados é: %.2f\n",media);
}else{
        printf("Nenhum valor foi digitado.\n");
    }

}
