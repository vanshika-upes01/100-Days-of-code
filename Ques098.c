#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    
    // Input full name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int lastSpace = -1;

    // Find the position of the last space (before surname)
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials for all words except the last (surname)
    for (int i = 0; i <= lastSpace; i++) {
        if (i == 0 && isalpha(name[i])) {
            printf("%c. ", toupper(name[i])); // first initial
        } else if (name[i] == ' ' && i + 1 <= lastSpace && isalpha(name[i + 1])) {
            printf("%c. ", toupper(name[i + 1])); // other initials
        }
    }

    // Print the surname in full
    if (lastSpace != -1 && lastSpace + 1 < len) {
        for (int i = lastSpace + 1; i < len; i++) {
            printf("%c", name[i]);
        }
    }

    printf("\n");
    return 0;
}