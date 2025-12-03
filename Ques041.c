#include <stdio.h>
#include <math.h>

int main() {
    int num, original, first, last, digits, swapped;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    if (num < 0) num = -num; // handle negative numbers

    last = num % 10; // last digit

    // Count number of digits
    digits = (int)log10(num); // digits = total_digits - 1
    first = num / (int)pow(10, digits); // first digit

    // Swap first and last digits
    swapped = last * (int)pow(10, digits) + (num % (int)pow(10, digits) - last) + first;

    // Restore sign if original number was negative
    if (original < 0) swapped = -swapped;

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}