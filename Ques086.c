#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string (ignore newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}