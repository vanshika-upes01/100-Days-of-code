#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    original = num;

    // Calculate sum of factorials of digits
    while (num != 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    // Check if sum equals the original number
    if (sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);

    return 0;
}