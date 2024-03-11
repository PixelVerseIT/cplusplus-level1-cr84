#include "stdio.h"

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 13) {
        printf("You are a child\n");
    } else if (age < 19) {
        printf("You are a teenager\n");
    } else if (age < 60) {
        printf("You are an adult\n");
    } else {
        printf("You are a senior citizen\n");
    }
    return 0;
}