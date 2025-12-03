#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character and skip vowels
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j++] = ch;
        }
    }

    result[j] = '\0'; // terminate the result string

    printf("String after removing vowels: %s\n", result);

    return 0;
}