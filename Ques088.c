#include <stdio.h>

int main() {
    char str[1000];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}