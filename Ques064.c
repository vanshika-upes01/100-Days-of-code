#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; // To count digits 0-9

    // Input the number
    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) num = -num; // handle negative numbers

    // Count the occurrence of each digit
    if (num == 0) {
        count[0] = 1; // special case when number is 0
    } else {
        while (num != 0) {
            int digit = num % 10;
            count[digit]++;
            num /= 10;
        }
    }

    // Find the digit with maximum occurrence
    int maxCount = count[0];
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most (%d times).\n", maxDigit, maxCount);

    return 0;
}