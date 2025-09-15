//Write a program to add two 3 ¥ 3 matrix using pointers.
#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3];
    int i, j;

    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Adding the matrices element by element using pointers
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            *(*(sum + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", *(*(sum + i) + j));
        }
        printf("\n");
    }

    return 0;
}