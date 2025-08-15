#include <stdio.h>
#include <string.h>

int main(){

    //Declarando uma string
    char palavras[]= "abcd";

    //Printando a string
    printf("%s\n", palavras);

    //modificação da string
    palavras[2]='X';
    printf("%s\n",palavras);

    return 0;
}