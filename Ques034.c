#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = false;
    } else {
        // Check for factors from 2 to sqrt(num)
        for (int i = 2; i*i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}