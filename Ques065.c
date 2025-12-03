#include <stdio.h>

int main() {
    int n, key, left, right, mid, found = 0;

    // Input size of the array
    printf("Enter the number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array elements
    printf("Enter %d elements in ascending order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Binary search
    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d.\n", key, mid + 1);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}