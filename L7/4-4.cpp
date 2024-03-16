#include "stdio.h"

int main(){
    int eng, math, sci;
    int passed = 0;
    printf("Enter the marks for English, Math and Science: ");
    scanf("%d %d %d", &eng, &math, &sci);
    if (eng >= 60 && eng <= 100){
        passed ++;
    } if (math >= 60 && math <= 100){
        passed ++;
    } if (sci >= 60 && sci <= 100){
        passed ++;
    }
    printf("The number of subjects passed is %d\n", passed);
    return 0;
}