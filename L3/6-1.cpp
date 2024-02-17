#include "stdio.h"

int main(){
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    float perimeter = 2 * 3.14 * radius;
    printf("The perimeter is: %10.2f\n", perimeter);
    return 0;
}