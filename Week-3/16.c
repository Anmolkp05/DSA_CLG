// Write a program that reads a matrix and displays the sum of the elements above the main diagonal.
// (Hint: Calculate the sum of elements Aij where i<j)


#include <stdio.h>

int main() {
    int mat[10][10], size, i, j, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // sum elements where the column index is greater than the row index
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j > i) {
                sum += mat[i][j];
            }
        }
    }

    printf("The sum of elements above the main diagonal is: %d\n", sum);

    return 0;
}