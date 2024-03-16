#include "stdio.h"

int main(){
    int t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3);
    // can be traingle or not
    if (t1 + t2 > t3 && t1 + t3 > t2 && t2 + t3 > t1) {
        printf("It can be a triangle\n");
    } else {
        printf("It can NOT be a triangle\n");
    }
}