#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1; // use long long to handle large numbers

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if n is less than 2
    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } else {
        // Calculate the product of even numbers
        for (int i = 2; i <= n; i += 2) {
            product *= i;
        }
        printf("Product of even numbers from 1 to %d is %llu\n", n, product);
    }

    return 0;
}