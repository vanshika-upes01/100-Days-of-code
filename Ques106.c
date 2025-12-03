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

    int nge[n]; // array to store next greater elements

    // Brute-force approach to find next greater elements
    for (int i = 0; i < n; i++) {
        nge[i] = -1; // default value if no greater element exists
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break; // first greater element found
            }
        }
    }

    // Print the next greater elements in comma-separated format
    printf("Next Greater Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d", nge[i]);
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
