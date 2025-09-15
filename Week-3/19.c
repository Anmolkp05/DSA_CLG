// Write a program that reads a square matrix of size n x n. Write a function int isLowerTriangular (int a[][], int n) that returns 1 if the matrix is lower triangular.
// (Hint: Array A is lower triangular if Aij = 0 and i<j)

#include <stdio.h>

int isLowerTriangular(int a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // check for non-zero elements above the main diagonal
            if (i < j && a[i][j] != 0) {
                return 0; // not lower triangular
            }
        }
    }
    return 1; // is lower triangular
}

int main() {
    int mat[10][10], size, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (isLowerTriangular(mat, size)) {
        printf("The matrix is lower triangular.\n");
    } else {
        printf("The matrix is not lower triangular.\n");
    }

    return 0;
}