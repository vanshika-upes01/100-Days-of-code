#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int len;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("All substrings of the string:\n");

    // Generate all substrings
    for (int i = 0; i < len; i++) {      // starting index
        for (int j = 1; j <= len - i; j++) {  // length of substring
            for (int k = i; k < i + j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}