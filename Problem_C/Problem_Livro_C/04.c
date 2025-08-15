/*
Simule um sistema de senha.
Peça ao usuário uma senha de 4 dígitos.
Diga se ela está correta (ex: 1234) ou não.
Dê no máximo 3 tentativas.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 10

int main(){

    char senha[TAM];
    char tentativas[TAM];
    int tentativa = 5;

    //cadastro 
    printf("Cadastre um senha númerica de até 4 dígitos: ");
    fgets(senha,TAM,stdin);
    senha[strcspn(senha, "\n")]= '\0';

    //verificação de senha com apenas números 
    for(size_t i =0; i< strlen(senha);i++){
        if(!isdigit(senha[i])){
            printf("Senha inválida. Use apenas números. \n");
            return 1;
        }
    }

    //tela de login 
    while(tentativa>0){
        printf("\n Digite a senha: ");
        fgets(tentativas, TAM, stdin);
        tentativas[strcspn(tentativas, "\n")]= '\0';
        if (strcmp(senha,tentativas)==0){
            printf("Login bem sucedido");
            return 0;
        }else{
            tentativa--;
            printf("Senha incorreta. Tentativa restantes %d\n", tentativa);
        }
    printf("Número máximo de tentativas. Acesso bloqueado");
    }


    return 0;
}