#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}; // frequency array for lowercase letters

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') { // check for lowercase letters
            freq[ch - 'a']++; // increment frequency

            if (freq[ch - 'a'] == 2) { // first time frequency becomes 2
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}