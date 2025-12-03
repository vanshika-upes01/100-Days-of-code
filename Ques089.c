#include <stdio.h>

int main() {
    char str[1000], ch;
    int count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input character to count
    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Count frequency
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}