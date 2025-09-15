#include <stdio.h>

int main() {
    int arr[] = {5,7,3,7,3};  //declaring an array
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < 5; i++) {
        printf("Element at index %d is %d\n", i, arr[i]);
    }

    return 0;
}