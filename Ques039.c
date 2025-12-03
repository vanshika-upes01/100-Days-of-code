#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;  // To handle large products
    int hasOdd = 0;         // Flag to check if there is any odd digit

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // store original number for display

    if (num < 0) num = -num; // handle negative numbers

    // Calculate product of odd digits
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) { // check if digit is odd
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits of %d is %lld\n", original, product);
    else
        printf("No odd digits in %d\n", original);

    return 0;
}