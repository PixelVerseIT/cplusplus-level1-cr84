// Andy buys some apples, if less than 4 kg, it is $1.5 per kg, else if less than 8kg, it is $1.3 per kg. else it is $1.1 per kg.

#include "stdio.h"

int main(){
    float weight;
    printf("Enter the weight of the apples: ");
    scanf("%f", &weight);

    if (weight < 4) {
        printf("The price is $%.2f\n", weight * 1.5);
    } else if (weight < 8) {
        printf("The price is $%.2f\n", weight * 1.3);
    } else {
        printf("The price is $%.2f\n", weight * 1.1);
    }

    return 0;
}