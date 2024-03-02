// Input a number, if it is an odd number, output "It is an odd number". 
// Modified to include else to output "It is an even number".


#include "stdio.h"

int main(){
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    if (x % 2 == 1) {
        printf("x is an odd number. \n");
    }
    else {
        printf("x is an even number. \n");
    }
    return 0;
}
