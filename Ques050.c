#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < rows - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}