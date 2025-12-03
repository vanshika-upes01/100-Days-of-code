#include <stdio.h>

int main() {
    int n;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    printf("Number of positive elements = %d\n", positiveCount);
    printf("Number of negative elements = %d\n", negativeCount);
    printf("Number of zeros = %d\n", zeroCount);

    return 0;
}