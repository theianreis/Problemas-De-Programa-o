#include <stdio.h>

int fatorial(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    else{
        return n*fatorial(n-1);
    }
}

int main(){
    
    int num;
    printf("Digite o valor de n: ");
    scanf("%d",&num);
    printf("Fatorial de %d é %d\n", num, fatorial(num));

    return 0;
}