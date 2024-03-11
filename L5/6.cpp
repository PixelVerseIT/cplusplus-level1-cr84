#include "stdio.h"
using namespace std;

int main(){
    char a = 'A';
    printf("%d\n", a); // A is 65
    char b = 'B';
    printf("%d\n", b); // B is 66
    b ++;
    printf("%d\n", b); // B is 67
    b += 32;
    printf("%d\n", b); // B is 99
    a = 'a';
    printf("%d\n", a); // a is 97
    b = 'b';
    printf("%d\n", b); // b is 98
    b ++;
    printf("%d\n", b); // b is 99
    b += 1;
    printf("%d\n", b); // b is 100

    return 0;
}