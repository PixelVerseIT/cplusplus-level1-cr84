#include "stdio.h"

int main(){
    int age;
    scanf("%d", &age);
    if (age < 13) {
        printf("You are a Child\n");
    } else if (age >= 13 && age < 19) {
        printf("You are an Teenager\n");
    } else if (age >= 19 && age < 60) {
        printf("You are an Adult\n");
    } else {
        printf("You are a Senior citizen\n");
    }
    return 0;
}