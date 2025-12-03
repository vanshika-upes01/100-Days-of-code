#include <stdio.h>

int main() {

    int blocks[] = {1, 3, 5, 3, 1};  // number of stars in each block
    int n = 5;                       // total blocks

    for (int i = 0; i < n; i++) {

        // Print stars for the current block
        for (int j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }

        // Print a blank line between blocks (except after last block)
        if (i != n - 1) {
            printf("\n");
        }
    }

    return 0;
}