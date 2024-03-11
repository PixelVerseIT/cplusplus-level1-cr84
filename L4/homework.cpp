#include "stdio.h"

int main(){
    int a, b, c, max;
    printf("Etner 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("Max number is: %d\n", max);
    return 0;
}