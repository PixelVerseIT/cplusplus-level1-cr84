#include "stdio.h"

int main(){
    int a;
    scanf("%d", &a);
    if (a % 2 == 1) {
        printf("The number is odd\n");
    } else {
        printf("The number is even\n");
    }
    return 0;
}