#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n; // in case k > n
    int temp[n];

    // Copy last k elements to temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy elements from temp to the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of positions to rotate
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    // Print rotated array
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}