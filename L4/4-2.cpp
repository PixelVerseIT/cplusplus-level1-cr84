#include "stdio.h"

int main(){
    int x, absX;
    printf("Enter x: ");
    scanf("%d", &x);
    absX = x;
    if (x < 0) {
        absX = -x;
    }
    printf("The absolute value of x is: %d\n", absX);
    return 0;
}