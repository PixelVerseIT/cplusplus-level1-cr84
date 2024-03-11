#include "stdio.h"

int main(){
    int a, b, c;
    printf("Input the votes for A, B, C: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("A wins\n");
    } else if (b > a && b > c) {
        printf("B wins\n");
    } else if (c > a && c > b) {
        printf("C wins\n");
    } else {
        printf("T - Draw\n");
    }
    return 0;
}