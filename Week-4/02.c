// 2. Write a program to convert the lower case characters of a string into upper case.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string (with spaces)

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase (ASCII difference)
        }
        i++;
    }

    printf("String in uppercase: %s", str);

    return 0;
}