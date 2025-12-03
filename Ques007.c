#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}