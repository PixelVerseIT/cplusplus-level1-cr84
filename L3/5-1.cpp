// Practice 5.1
#include "stdio.h"

int main(){
    float radius, area;
    const float PI = 3.14;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area is: %10.2f\n", area);
    return 0;
}