#include <stdio.h>

int pot(int base, int exp){
    if(exp==0){
        return 1;
    }
    else{
        return base*pot(base,exp-1);
    }
}

int main(){

    int num=2;

    for(int i = 0; i<10;i++){
        printf("%d^%d = %d\n",num,i,pot(num,i));
    }

    return 0;
}