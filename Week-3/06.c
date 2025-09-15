//Write a program to read and display a square (using functions).


#include <stdio.h>

#define MAX_SIZE 10

// Function to read a square matrix
void read_matrix(int mat[][MAX_SIZE], int size) {
    printf("Enter the elements of the %d x %d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to display a square matrix
void display_matrix(int mat[][MAX_SIZE], int size) {
    printf("The matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    printf("Enter the size of the square matrix (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    read_matrix(matrix, size);
    display_matrix(matrix, size);

    return 0;
}