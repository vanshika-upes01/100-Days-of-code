#include <stdio.h>

int main() {
    char str[1000]; // assuming maximum length 999
    int count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads string with spaces

    // Count characters until null character '\0'
    while (str[count] != '\0' && str[count] != '\n') { // ignore newline from fgets
        count++;
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}