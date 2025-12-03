#include <stdio.h>

int main() {
    int n;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];   // store the maximum sum
    int currentSum = arr[0]; // store the current subarray sum

    for (int i = 1; i < n; i++) {
        // Either start a new subarray at arr[i] or extend the current subarray
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        // Update maxSum if currentSum is larger
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum contiguous subarray sum: %d\n", maxSum);

    return 0;
}