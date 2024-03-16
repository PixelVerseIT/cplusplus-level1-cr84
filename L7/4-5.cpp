#include "stdio.h"

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    while (year != 0) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            printf("The year is a leap year\n");
        } else {
            printf("The year is NOT a leap year\n");
        }
        printf("Enter a year: ");
        scanf("%d", &year);
    }
    return 0;
}