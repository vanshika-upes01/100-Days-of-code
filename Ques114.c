#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    
    // Remove newline character if present
    s[strcspn(s, "\n")] = '\0';

    int n = strlen(s);
    int lastIndex[256]; // stores last index of each character
    for (int i = 0; i < 256; i++) lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0; // start index of current window

    for (int i = 0; i < n; i++) {
        if (lastIndex[(int)s[i]] >= start) {
            // Move start to one after the previous occurrence
            start = lastIndex[(int)s[i]] + 1;
        }
        lastIndex[(int)s[i]] = i; // update last index of current character
        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1; // update max length
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}