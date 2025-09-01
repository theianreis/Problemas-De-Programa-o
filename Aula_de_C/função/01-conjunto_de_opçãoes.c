#include <stdio.h>

int conjunto_ope(){
    int operac;

    do
    {
        printf("1-Exibir ajuda \n 2-Iniciar o programa \n 3-Fazer alguma coisa \n 4-Encerra o programa \n");
        printf("Digite o valor da operação: \n ");
        scanf("%d", &operac);

         if (operac<1 || operac>4){
            printf("Opção Inválida");
        }
    } while (operac<1 || operac>4 );
    
    return operac;
}

int main(){
    int escolha;
    escolha  = conjunto_ope();

    return 0;
}