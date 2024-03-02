#include "stdio.h"

int main(){
    int x, y;
    
    printf("Enter x and y: ");
    scanf(" %d %d", &x, &y);

    printf("Before swap x: %d, y: %d\n", x, y);

    int t;
    t = x;
    x = y;
    y = t;

    printf("After swap x: %d, y: %d\n", x, y);

    return 0;
}