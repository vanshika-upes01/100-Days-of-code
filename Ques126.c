#include <stdio.h>

int main() {
    char filename[100];
    char ch;

    // Ask for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File \"%s\" does not exist or cannot be opened.\n", filename);
        return 1;
    }

    printf("Contents of \"%s\":\n", filename);

    // Read and display the file character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}