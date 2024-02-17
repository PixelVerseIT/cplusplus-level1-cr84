//5 - Practice

//5.1
// #include "stdio.h"
// int main(){
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     printf("%d\n", b);
// }

//5.2
// #include "stdio.h"
// int main(){
//     char a;
//     scanf("%c", &a);
//     printf("%c\n", a);
//     printf("%c %c\n", a, a);
//     printf("%c %c %c\n", a, a, a);
// }

//5.3
// #include "stdio.h"
// int main(){
//     float math;
//     float eng;
//     float sci;
//     float average;
//     scanf("%f%f%f", &math, &eng, &sci);
//     average = (math + eng + sci) / 3;
//     printf("%f\n", average);
// }

//Homework
#include "stdio.h"
int main() {
    float cel;
    float fah;
    printf("Please input temp:\n");
    scanf("%f", &cel);
    fah = cel * 9 / 5 + 32;
    printf("%f\n", fah);
}

