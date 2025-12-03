#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    // Input sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    int start = 0, end;
    int len = strlen(sentence);

    for (int i = 0; i <= len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            end = i - 1;
            // Reverse the word
            int left = start, right = end;
            while (left < right) {
                char temp = sentence[left];
                sentence[left] = sentence[right];
                sentence[right] = temp;
                left++;
                right--;
            }
            start = i + 1; // move to next word
        }
    }

    printf("Sentence after reversing each word: %s\n", sentence);

    return 0;
}