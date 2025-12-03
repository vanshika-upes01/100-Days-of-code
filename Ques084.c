#include <stdio.h>

int main() {
    char str[1000];

    // Input string
    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);

    // Convert each lowercase character to uppercase
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // 'a'->'A', 'b'->'B', etc.
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}