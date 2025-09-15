//Write a program that computes the sum of the elements that are stored on the main diagonal of
// a matrix using pointers.

#include <stdio.h>

int main() {
    int mat[10][10];
    int size, i, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Calculate sum of main diagonal using pointers
    for (i = 0; i < size; i++) {
        sum += *(*(mat + i) + i);
    }

    printf("Sum of the main diagonal elements is: %d\n", sum);

    return 0;
}