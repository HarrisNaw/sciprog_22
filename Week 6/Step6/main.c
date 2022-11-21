#include<stdio.h>
#include<math.h>
#include "matmult.c"

// Function to print matrix.
void printMatrix(int n, int m, double matrix[n][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%3.0f  ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int n = 5, p = 3, q = 4;
    double A[n][p], B[p][q], C[n][q];
    int i, j, k;

    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++)
            A[i][j] = i+j;

    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            B[i][j] = i-j;

    for (i = 0; i < n; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0.0;

    // Matrix Multiplication
    matmult(n, p, q, A, B, C);

    printf("Matrix A\n");
    printMatrix(n, p, A);

    printf("Matrix B\n");
    printMatrix(p, q, B);

    printf("Matrix C\n");
    printMatrix(n, q, C);


    return 0;
}