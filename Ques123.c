#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0; // flag to track if currently inside a word

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    // If file ends with a word (not followed by space)
    if (inWord) {
        words++;
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(file);
    return 0;
}