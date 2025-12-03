#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);
    int newSentence = 1; // Flag to indicate start of a sentence

    for (int i = 0; i < n; i++) {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        // Check if current character is a period, question mark, or exclamation
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            newSentence = 1;
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}