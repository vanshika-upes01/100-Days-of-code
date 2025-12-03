#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];

    // Input full name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");

    // Print the first character if it's a letter
    if (name[0] >= 'A' && name[0] <= 'Z' || name[0] >= 'a' && name[0] <= 'z') {
        printf("%c", name[0]);
    }

    // Loop through the string and find characters after spaces
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' &&
            ((name[i + 1] >= 'A' && name[i + 1] <= 'Z') || (name[i + 1] >= 'a' && name[i + 1] <= 'z'))) {
            printf("%c", name[i + 1]);
        }
    }

    printf("\n");

    return 0;
}