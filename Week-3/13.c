// Write a program using pointers to interchange the second biggest and the second smallest number in the array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int smallest, second_smallest, largest, second_largest;
    int pos_ss = -1, pos_sl = -1;
    int *ptr_ss, *ptr_sl, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two elements.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    // Initialize with the first two elements to handle various cases
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
        smallest = arr[1];
        second_smallest = arr[0];
    } else {
        largest = arr[1];
        second_largest = arr[0];
        smallest = arr[0];
        second_smallest = arr[1];
    }
    
    // Find the required elements
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest) {
            second_largest = arr[i];
        }

        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }

    // Find the indices to swap
    for(i = 0; i < n; i++) {
        if(arr[i] == second_smallest) pos_ss = i;
        if(arr[i] == second_largest) pos_sl = i;
    }

    if (pos_ss != -1 && pos_sl != -1) {
        printf("Swapping second smallest (%d) and second largest (%d).\n", second_smallest, second_largest);
        // Use pointers to perform the swap
        ptr_ss = &arr[pos_ss];
        ptr_sl = &arr[pos_sl];

        temp = *ptr_ss;
        *ptr_ss = *ptr_sl;
        *ptr_sl = temp;
    }

    printf("Array after interchanging:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}