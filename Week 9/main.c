#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

#define MAX_FILE_NAME 100

int get_num_lines(char filename[MAX_FILE_NAME]) {
    FILE *file;

    file = fopen(filename, "r");
    int ch_read;
    int count = 0;

    while ((ch_read = fgetc(file)) != EOF) {
        if (ch_read == '\n')
            count++;
    }
    return count;
}

int main(void) {

    FILE *file;
    char filename[MAX_FILE_NAME];

    printf("Enter file name: ");
    scanf("%s", filename);

    // Number of lines.
    int N = get_num_lines(filename);

    file = fopen(filename, "r");

    int i, j;
    int **square_matrix = malloc(N * sizeof(int *));

    for (i = 0; i < N; i++) {
        square_matrix[i] = malloc(N * sizeof(int *));
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            fscanf(file, "%d", &square_matrix[i][j]);
        }
    }

    int isMagicSqr = isMagicSquare(square_matrix, N);

    if (isMagicSqr == 1)
        printf("This is a magic square\n");
    else
        printf("This not a magic square\n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", square_matrix[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < N; i++)
    {
        free(square_matrix[i]);
    }
    free(square_matrix);
    fclose(file);
    
    return 0;
}