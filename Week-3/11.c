//Write a program to input the elements of a two dimensional array. Then from this array, make two  arrays—one that stores all odd elements of the two-dimensional array and the other that stores all even elements of the array.

#include <stdio.h>

int main() {
    int mat[10][10];
    int rows, cols, i, j;
    int odd_array[100], even_array[100];
    int odd_count = 0, even_count = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            // check if the element is even or odd and store it
            if (mat[i][j] % 2 == 0) {
                even_array[even_count++] = mat[i][j];
            } else {
                odd_array[odd_count++] = mat[i][j];
            }
        }
    }

    printf("\nOdd elements array:\n");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf("\n");

    printf("\nEven elements array:\n");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");

    return 0;
}