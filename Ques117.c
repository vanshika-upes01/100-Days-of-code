#include <stdio.h>

int main() {
    int m, n;

    // Input sizes of the two arrays
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n];

    // Input elements of the first array
    printf("Enter %d elements of first array (sorted): ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of the second array
    printf("Enter %d elements of second array (sorted): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge arrays using two-pointer technique
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    // Print the merged array
    printf("Merged sorted array: ");
    for (int l = 0; l < m + n; l++) {
        printf("%d ", merged[l]);
    }
    printf("\n");

    return 0;
}