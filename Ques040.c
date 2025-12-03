#include <stdio.h>

int main() {
    char binary[65];  // assuming max 64-bit binary number

    // Input the binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's complement: ");

    // Compute and print 1's complement
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("\nInvalid binary number!\n");
            return 1;
        }
    }

    printf("\n");
    return 0;
}