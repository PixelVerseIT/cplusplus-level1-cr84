#include "stdio.h"

int main(){
    int sum = 0;
    // use for loop to calculate 1 * 2 + 3 * 4 + 5 * 6 + ... + 99 * 100
    for (int i = 1; i < 100; i+=2){
        sum += i * (i + 1);
    }
    printf("%d\n", sum);
    return 0;
}