//Write a program to interchange the second element
//with the second last element.
#include <stdio.h>

int main() {
    int arr[100], n, i, temp;

    printf("Enter the number of elements: "); //input no of elements
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);  //input elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // swapping the second and second-last
    temp = arr[1];
    arr[1] = arr[n - 2];
    arr[n - 2] = temp;

    printf("Array after interchanging elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  //printing the final array
    }
    printf("\n");

    return 0;
}