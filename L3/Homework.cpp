// Homework
#include "stdio.h"

int main(){
    float x1, x2, y1, y2, area;
    printf("Enter the coordinates of the first point: ");
    scanf(" %f %f", &x1, &y1);
    printf("Enter the coordinates of the second point: ");
    scanf(" %f %f", &x2, &y2);
    area = (x2 - x1) * (y2 - y1);
    printf("The area is: %10.2f\n", area);
    return 0;
}