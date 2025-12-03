#include <stdio.h>

int main() {
    int n, element, found = 0;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to delete
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Search for the element and delete it
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            // Shift elements to the left
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // reduce array size
            break; // remove only first occurrence
        }
    }

    if (found) {
        printf("Array after deletion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}