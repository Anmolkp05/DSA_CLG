// Write a program to delete all the duplicate entries from an array of n integers

#include <stdio.h>

int main() {
    int arr[100], n, i, j, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                // Shift elements to the left to overwrite the duplicate
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // reduce the effective size of the array
            } else {
                j++; // only increment j if no deletion occurred
            }
        }
    }

    printf("Array after deleting duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}