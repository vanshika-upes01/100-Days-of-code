#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read character by character, convert to uppercase, and write to output
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    printf("Conversion to uppercase completed. Check output.txt\n");

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}