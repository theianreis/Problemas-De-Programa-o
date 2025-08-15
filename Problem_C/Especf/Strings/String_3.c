#include <stdio.h>
#include <string.h>

int main(){

    char destino[20];
    char destino_2[20];
    char concat[20];
    char buffer[100];
    int idade = 30;

    char s[]="Exemplo";
    int len = strlen(s); //comprimento de string 
    strcpy(destino, "Veja"); //copiar carac
    strncpy(destino,"abcde",2); //copiar n cararc
    strcat(concat,"hello"); //concatenação
    strcmp(destino,destino_2);//comparação de string
    strncmp(destino,destino_2,1);//Comparação de n caract
    char *p = strchr("banana", 'n'); // aponta para a primeira ocorrência de 'n'
    char *p = strstr("Bom dia", "dia"); // aponta para "dia"(substring)
    sprintf(buffer, "Idade: %d", idade); // buffer = "Idade: 30"

    return 0;
}