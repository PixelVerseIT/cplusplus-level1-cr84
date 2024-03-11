#include "stdio.h"

int main(){
    char inputChar;
    printf("Enter a character (lowercase or uppercase): ");
    scanf("%c", &inputChar);

    if (inputChar >= 'a' && inputChar <= 'z') {
        char outputChar = inputChar - ('a' - 'A');
        printf("Output: %c\n", outputChar);
    }
    if (inputChar >= 'A' && inputChar <= 'Z') {
        char outputChar = inputChar + ('a' - 'A');
        printf("Output: %c\n", outputChar);
    }
    return 0;
}