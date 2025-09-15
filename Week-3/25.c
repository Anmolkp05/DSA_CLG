// Write a program to read a floating point array. Update the array to insert a new number at the specified location.

#include <stdio.h>

int main() {
    float arr[101]; // one extra space for insertion
    int n, i, pos;
    float new_num;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d floating-point numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%f", &new_num);
    printf("Enter the position to insert at (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Adjust position to be a 0-based index
    pos--; 

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space
    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new number
    arr[pos] = new_num;
    n++; // an element has been added

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}