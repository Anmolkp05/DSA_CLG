//Write a program to read two floating point numbe arrays. Merge the two arrays and display the resultant array in reverse order.

#include <stdio.h>

int main() {
    float arr1[50], arr2[50], merged_array[100];
    int n1, n2, i, merged_size;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter its elements: ");
    for (i = 0; i < n1; i++) scanf("%f", &arr1[i]);

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter its elements: ");
    for (i = 0; i < n2; i++) scanf("%f", &arr2[i]);

    merged_size = n1 + n2;

    // First, copy elements from the first array
    for (i = 0; i < n1; i++) {
        merged_array[i] = arr1[i];
    }
    // Then, append elements from the second array
    for (i = 0; i < n2; i++) {
        merged_array[n1 + i] = arr2[i];
    }

    printf("\nMerged array in reverse order:\n");
    // Print the merged array starting from the end
    for (i = merged_size - 1; i >= 0; i--) {
        printf("%.2f ", merged_array[i]);
    }
    printf("\n");

    return 0;
}