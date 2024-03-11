/*
 * Solution Template for Election II
 * 
 * Australian Informatics Olympiad 2022
 * 
 * This file is provided to assist with reading and writing of the input
 * files for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <cstdio>

/* N is the number of votes. */
int N;

/* votes contains the sequence of votes. */
char votes[100005];

char answer;

int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("elecin.txt", "r");
    FILE *output_file = fopen("elecout.txt", "w");

    /* Read the value of N and the votes from the input file. */
    fscanf(input_file, "%d", &N);
    fscanf(input_file, "%s", votes);

    /*
     * TODO: This is where you should compute your solution. Store the winning
     * candidate ('A', 'B' or 'C'), or 'T' if there is a tie, into the variable
     * answer.
     */

    int countA = 0;
    int countB = 0;
    int countC = 0;
    for (int i = 0; i < N; i++) {
        if (votes[i] == 'A') {
            countA++;
        }
        if (votes[i] == 'B') {
            countB++;
        }
        if (votes[i] == 'C') {
            countC++;
        }
    }

    if (countA > countB && countA > countC) {
        answer = 'A';
    } else if (countB > countA && countB > countC) {
        answer = 'B';
    } else if (countC > countA && countC > countB) {
        answer = 'C';
    } else {
        answer = 'T';
    }

    /* Write the answer to the output file. */
    fprintf(output_file, "%c\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}