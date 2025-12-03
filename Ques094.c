#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char longest[1000] = "";
    int maxLength = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0;
    while (sentence[i] != '\0' && sentence[i] != '\n') {
        char word[1000];
        int j = 0;

        // Extract word
        while (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            word[j++] = sentence[i++];
        }
        word[j] = '\0'; // terminate word

        // Check if this word is longest
        if (j > maxLength) {
            maxLength = j;
            strcpy(longest, word);
        }

        if (sentence[i] != '\0') i++; // skip space
    }

    printf("Longest word: %s\n", longest);
    printf("Length of longest word: %d\n", maxLength);

    return 0;
}