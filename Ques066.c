#include <stdio.h>

int main() {
    int n, key;

    // Input the size of the array
    printf("Enter the number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 for the new element

    // Input sorted array elements
    printf("Enter %d elements in ascending order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    int i;
    // Find the correct position for insertion
    for (i = n - 1; i >= 0 && arr[i] > key; i--) {
        arr[i + 1] = arr[i]; // shift elements to the right
    }

    arr[i + 1] = key; // insert the new element
    n++; // increase array size

    // Print the updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}