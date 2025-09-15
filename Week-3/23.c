// Write a program to enter a number and break it into n number of digits.

#include <stdio.h>

int main() {
    int number;
    int digits[20], i = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        digits[i++] = 0;
    }
    
    // extract digits from right to left
    while (number > 0) {
        digits[i] = number % 10;
        number = number / 10;
        i++;
    }

    printf("The digits of the number are: ");
    // print in reverse to get the correct order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", digits[j]);
    }
    printf("\n");

    return 0;
}