#include "stdio.h"

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int a = number / 1000;
    int b = (number / 100) % 10;
    int c = (number / 10) % 10;
    int d = number % 10;

    int reversedNum = d * 1000 + c * 100 + b * 10 + a;
    printf("The reversed number is: %d\n", reversedNum);
    return 0;
}