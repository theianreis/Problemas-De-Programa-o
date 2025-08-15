//soma de 1 a 9

#include <stdio.h>

int main(){

    int count=1,s=0;

    while (count<10)
    {
        s += count;
        count++;
    }
    printf("%d",s);
    

    return 0;
}
