// Input a number, output it is a positivie number or it is zero or it is a negative number

#include "stdio.h"

int main(){
    int a;
    scanf("%d", &a);
    if (a > 0) {
        printf("The number is positive\n");
    } else if (a == 0) {
        printf("The number is zero\n");
    } else {
        printf("The number is negative\n");
    }
    return 0;
}