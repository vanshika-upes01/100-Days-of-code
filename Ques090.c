#include <stdio.h>

int main() {
    char str[1000];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Toggle case
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // lowercase → uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // uppercase → lowercase
        }
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}