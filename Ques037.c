#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder, hcf;
    long long lcm;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Store original values
    tempA = a;
    tempB = b;

    // Find HCF using Euclidean algorithm
    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    hcf = tempA;

    // Calculate LCM
    lcm = (long long)a * b / hcf;

    printf("LCM of %d and %d is %lld\n", a, b, lcm);

    return 0;
}