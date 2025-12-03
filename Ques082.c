#include <stdio.h>

int main() {
    char str[1000];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads string with spaces

    // Print each character on a new line
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) { // ignore newline from fgets
        printf("%c\n", str[i]);
    }

    return 0;
}