#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[1000];

    // Input filename
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); // consume the leftover newline

    // Open file in append mode
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input text to append
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    // Remove newline character from input if present
    text[strcspn(text, "\n")] = '\0';

    // Append text with a newline
    fprintf(file, "%s\n", text);

    printf("Text successfully appended to %s\n", filename);

    // Close the file
    fclose(file);

    return 0;
}