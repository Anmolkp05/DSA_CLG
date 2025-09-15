//Write a program that computes the product of the 
//elements that are stored on the diagonal above the main diagonal.
#include <stdio.h>

int main() {
    int mat[10][10];
    int size, i;
    long long product = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Compute the product for the diagonal where j = i + 1
    for (i = 0; i < size - 1; i++) {
        product *= mat[i][i + 1];
    }

    printf("Product of elements on the diagonal above the main diagonal is: %lld\n", product);

    return 0;
}