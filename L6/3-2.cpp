#include "stdio.h"

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 3 == 0 || x % 5 == 0) {
        printf("The number is divisble by 3 or 5\n");
    } else {
        printf("The number is not divisble by 3 or 5\n");
    }

    return 0;

}