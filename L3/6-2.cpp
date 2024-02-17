#include "stdio.h"

int main(){
    int maths, eng, sci;
    printf("Enter the marks for Maths: ");
    scanf("%d", &maths);
    printf("Enter the marks for English: ");
    scanf("%d", &eng);
    printf("Enter the marks for Science: ");
    scanf("%d", &sci);
    float avg = (maths + eng + sci) / 3.0;
    printf("The average marks are: %10.2f\n", avg);
}