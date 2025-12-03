#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    // Input filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) { // Check if character is a letter
            ch = tolower(ch); // Convert to lowercase for easier comparison
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}