#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Input the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Handle the special case when number is 0
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[i] = num % 2; // store remainder
        num = num / 2;        // update number
        i++;
    }

    // Print binary digits in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}