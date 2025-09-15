// Write a program to illustrate the use of a pointer that points to a 2D array.
#include <stdio.h>

// function accepts a pointer to an array of 5 integers
void display_with_pointer(int (*p)[5], int rows, int cols) {
    printf("\nDisplaying matrix using a pointer to an array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\n", p[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[5][5] = { {1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = 3, cols = 3;

    display_with_pointer(mat, rows, cols);

    return 0;
}