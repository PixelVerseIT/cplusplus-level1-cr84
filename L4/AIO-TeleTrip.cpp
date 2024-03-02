#include "stdio.h"

int main(){
    int N;
    char instructions[100];
    int i;
    int currentHouse = 0;
    int visited[100] = {0};
    int count = 0;
    scanf("%d", &N);
    scanf("%s", instructions);
    for (i = 0; i < N; i++){
        if (instructions[i] == 'L'){
            currentHouse--;
        } else if (instructions[i] == 'R'){
            currentHouse++;
        } else {
            currentHouse = 0;
        }
        if (visited[currentHouse] == 0){
            visited[currentHouse] = 1;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}