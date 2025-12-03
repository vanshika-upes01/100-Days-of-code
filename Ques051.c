#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 5; i >= 1; i--) {
        // Print leading spaces
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        // Print numbers from i to 5
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}