#include <stdio.h>

int main() {
    int n;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements (numbers between 1 to n-1, one repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = 0;

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        repeated ^= arr[i];
    }

    // XOR with numbers from 1 to n-1
    for (int i = 1; i <= n - 1; i++) {
        repeated ^= i;
    }

    printf("Repeated element is: %d\n", repeated);

    return 0;
}