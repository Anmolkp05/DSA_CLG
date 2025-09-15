// Write a program that reads a square matrix of size n x n. Write a function int isUpperTriangular (int a[][], int n) that returns 1 if the matrix is upper triangular.
// (Hint: Array A is upper triangular if Aij = 0 and i>j)

#include <stdio.h>

int isUpperTriangular(int a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // check for non-zero elements below the main diagonal
            if (i > j && a[i][j] != 0) {
                return 0; // it's not upper triangular
            }
        }
    }
    return 1; // if all checks pass, it is upper triangular
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

    if (isUpperTriangular(mat, size)) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not upper triangular.\n");
    }

    return 0;
}