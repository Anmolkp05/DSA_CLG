// Write a program that reads a square matrix of size n ¥ n. Write a function int isSymmetric (int a[][], int n) that returns 1 if the matrix is symmetric. (Hint: Array A is symmetric if Aij = Aji for all values of i and j)


#include <stdio.h>

int isSymmetric(int a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // check if the element is different from its transpose
            if (a[i][j] != a[j][i]) {
                return 0; // not symmetric
            }
        }
    }
    return 1; // is symmetric
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

    if (isSymmetric(mat, size)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}