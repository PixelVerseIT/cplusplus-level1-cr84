#include "stdio.h"

int main(){
    float appleWeight;
    scanf("%f", &appleWeight);
    if (appleWeight < 4){
        float applePrice = appleWeight * 1.5;
        printf("The price of the apple is %f\n", applePrice);
        return 0;
    } if (appleWeight < 8 && appleWeight >= 4){
        float applePrice = appleWeight * 1.3;
        printf("The price of the apple is %f\n", applePrice);
        return 0;
    } else {
        float applePrice = appleWeight * 1.1;
        printf("The price of the apple is %f\n", applePrice);
    }
    return 0;
}