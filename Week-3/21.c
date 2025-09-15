// Write a program to calculate XA + YB where A and B are matrices and X = 2 and Y = 3 .

#include <stdio.h>

int main() {
    int A[10][10], B[10][10], Result[10][10];
    int rows, cols, i, j;
    int X = 2, Y = 3;

    printf("Enter matrix dimensions (rows cols): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter Matrix A:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) scanf("%d", &A[i][j]);

    printf("Enter Matrix B:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) scanf("%d", &B[i][j]);

    // Perform the calculation: 2A + 3B
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            Result[i][j] = (X * A[i][j]) + (Y * B[i][j]);
        }
    }

    printf("\nResult of %dA + %dB is:\n", X, Y);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}