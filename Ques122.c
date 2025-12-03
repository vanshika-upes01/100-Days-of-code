#include <stdio.h>

int main() {
    char line[256];

    // Open the existing file in read mode
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of the file:\n");

    // Read each line until end of file
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}