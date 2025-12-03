#include <stdio.h>

int main() {
    int n;
    
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n - 1]; // since one number is missing

    // Input array elements
    printf("Enter %d elements (numbers between 0 to %d, one missing): ", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of first n natural numbers (0 to n)
    int totalSum = n * (n + 1) / 2;

    // Calculate sum of elements in the array
    int arrSum = 0;
    for (int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    int missing = totalSum - arrSum;

    printf("Missing number is: %d\n", missing);

    return 0;
}