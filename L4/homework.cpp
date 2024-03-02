#include "stdio.h"

// input 3 interer numbers, find the max number of these 3 numbers

int main(){
    int max;
    int num1, num2, num3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2){
        if (num1 > num3){
            max = num1;
        } else {
            max = num3;
        }
    } else {
        if (num2 > num3){
            max = num2;
        } else {
            max = num3;
        }
    }
    printf("Max number is: %d\n", max);
    return 0;
}