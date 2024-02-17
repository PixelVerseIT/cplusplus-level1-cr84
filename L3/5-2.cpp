#include "stdio.h"

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int a = number / 100;
    int b = (number / 10) % 10;
    int c = number % 10;

    int reversedNum = c * 100 + b * 10 + a;
    printf("The reversed number is: %d\n", reversedNum);
    return 0;

}