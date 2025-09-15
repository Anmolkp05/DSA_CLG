// Write a program that reads a matrix and displays the sum of its diagonal elements.

#include <stdio.h>

int main() {
    int mat[10][10], size, i, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    // sum the diagonal elements where row index equals column index
    for (i = 0; i < size; i++) {
        sum += mat[i][i];
    }

    printf("The sum of the diagonal elements is: %d\n", sum);

    return 0;
}