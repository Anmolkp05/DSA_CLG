// Write a program to count the total number of non zero elements in a two-dimensional array.

#include <stdio.h>

int main() {
    int mat[10][10];
    int rows, cols, i, j, count = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] != 0) {
                count++;
            }
        }
    }

    printf("The total number of non-zero elements is: %d\n", count);

    return 0;
}