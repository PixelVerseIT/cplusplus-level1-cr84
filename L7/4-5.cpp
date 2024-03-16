#include "stdio.h"

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("The year is a leap year\n");
    } else {
        printf("The year is not a leap year\n");
        int yesno;
        printf("Do you want to check if the year is a leap year again? (1 for yes, 0 for no): ");
        scanf("%d", &yesno);
        if (yesno == 1) {
            printf("Enter a year: ");
            scanf("%d", &year);
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                printf("The year is a leap year\n");
            } else {
                printf("The year is not a leap year\n");
            }
        }
    }
}