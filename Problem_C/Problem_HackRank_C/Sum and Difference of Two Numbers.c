#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int n1, n2;
    float n3, n4;

    scanf("%d %d", &n1, &n2);

    int soma_int = n1 + n2;
    int dif_int = n1 - n2;

    printf("%d %d\n", soma_int, dif_int);

    scanf("%f %f", &n3, &n4);

    float soma_float = n3 + n4;
    float dif_float = n3 - n4;

    printf("%.1f %.1f", soma_float, dif_float);

    return 0;
}
