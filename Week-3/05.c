// Write a program that calculates the sum of squares of the elements.


#include <stdio.h>

int main() {
    int arr[100], n, i;
    long long sum_of_squares = 0; 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum_of_squares += arr[i] * arr[i];  // add to sum the squares of the elements
    }

    printf("The sum of squares of the elements is: %lld\n", sum_of_squares);  //printing

    return 0;
}