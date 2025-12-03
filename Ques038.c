#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // store original number for display

    // Calculate sum of digits
    if (num < 0) num = -num; // handle negative numbers

    while (num != 0) {
        remainder = num % 10; // get last digit
        sum += remainder;     // add to sum
        num /= 10;            // remove last digit
    }

    printf("Sum of digits of %d is %d\n", original, sum);

    return 0;
}