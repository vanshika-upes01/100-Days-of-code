#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    char ch;

    // Input source and destination filenames
    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from %s to %s\n", sourceFile, destFile);

    // Close both files
    fclose(src);
    fclose(dest);

    return 0;
}