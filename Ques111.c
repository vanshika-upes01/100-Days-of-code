#include <stdio.h>

int main() {
    int n, k;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 0;
    }

    printf("First negative integers in each window: ");

    // Brute-force approach using nested loops
    for (int i = 0; i <= n - k; i++) { // starting index of window
        int found = 0;
        for (int j = i; j < i + k; j++) { // elements in the current window
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; // first negative found
            }
        }
        if (!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}