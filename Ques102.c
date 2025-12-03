#include <stdio.h>

int main() {
    int n, x;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array elements
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target number
    printf("Enter the number x: ");
    scanf("%d", &x);

    int ceilIndex = -1;

    // Linear search for the smallest element >= x
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("Index of ceil of %d: %d\n", x, ceilIndex);

    return 0;
}