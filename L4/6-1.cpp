#include "stdio.h"

int main(){
    int a, b, c;
    printf("Enter a three digit number: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        int z;
        z = b;
        b = a;
        a = b; 
    }
    if (a > c) {
        int z;
        z = c;
        c = a;
        a = z;
    }
    if (b > c) {
        int z;
        z = c;
        c = b;
        b = z;
    }
    printf("The acensidng number is: %d%d%d\n", a, b, c);
    return 0;
}