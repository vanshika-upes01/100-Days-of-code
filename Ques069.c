#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 1;
    }

    int arr[n];
    int largest = INT_MIN, secondLargest = INT_MIN;

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        printf("There is no second largest element.\n");
    else
        printf("The second largest element is %d\n", secondLargest);

    return 0;
}