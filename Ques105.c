#include <stdio.h>

int main() {
    int n;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Phase 1: Find a candidate
    int candidate = nums[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) count++;
    }

    if (count > n / 2) {
        printf("Majority element: %d\n", candidate);
    } else {
        printf("No majority element exists. Output: -1\n");
    }

    return 0;
}