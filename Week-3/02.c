/*
 2. Write a program that reads an array of 100
 integers. Display all the pairs of elements whose
 sum is 50.
*/

#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter the number of integers max(100): ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Pairs of elements whose sum is 50:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == 50) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}