#include <stdio.h>
#include <math.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int dif_abs = fabs(*a - *b);
    
    *a = sum;
    *b = dif_abs;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    update(&a, &b);

    printf("%d\n%d", a, b);
    return 0;
}