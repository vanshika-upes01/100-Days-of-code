#include <stdio.h>

int main() {
    int n, pos, element;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 for the new element

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element and position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = element; // insert element
    n++; // increase array size

    // Print the updated array
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
