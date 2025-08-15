#include <stdio.h>

unsigned long long fatorial(int n){
    unsigned long long fat =1;
    for(int i =1;i<=n;i++){
        fat *=i;   
    }
    return fat;
}

int main(){
    int N;
    double e = 0.0;

    printf("Digite o número de termos para a série de Euler: ");
    scanf("%d",&N);

    for(int i = 0;i<=N;i++){
        e += 1.0/fatorial(i);
    }

    printf("Aproximação de e com %d termos: %.5lf\n",N,e);

    return 0;

}
