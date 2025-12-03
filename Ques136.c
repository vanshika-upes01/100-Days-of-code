#include <stdio.h>

// Define enum for menu choices
enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice;
    int num1, num2, result;

    // Display menu
    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    // Take user choice
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operation based on choice
    switch(choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}