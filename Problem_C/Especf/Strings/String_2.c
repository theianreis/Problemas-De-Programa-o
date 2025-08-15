#include <stdio.h>
#include <string.h>


int main( ){

    char name[] = "Ian";
    int length = sizeof(name)/sizeof(name[0]);


    for(int i = 0; i<length;i++){
        printf("%c",name[i]);
    }

    return 0;
}