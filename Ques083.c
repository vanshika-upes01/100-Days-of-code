#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        // Check if character is an alphabet
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert uppercase to lowercase for simplicity
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32; // 'A'->'a', 'B'->'b', etc.
            }

            // Check for vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}