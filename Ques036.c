#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Euclidean algorithm to find HCF
    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    printf("HCF (GCD) of %d and %d is %d\n", a, b, tempA);

    return 0;
}