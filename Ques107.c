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

    int pge[n]; // array to store previous greater elements

    // Brute-force approach to find previous greater elements
    for (int i = 0; i < n; i++) {
        pge[i] = -1; // default value if no greater element exists
        for (int j = i - 1; j >= 0; j--) { // check elements to the left
            if (arr[j] > arr[i]) {
                pge[i] = arr[j];
                break; // first greater element found
            }
        }
    }

    // Print the previous greater elements in comma-separated format
    printf("Previous Greater Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d", pge[i]);
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}