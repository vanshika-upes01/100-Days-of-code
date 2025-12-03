#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {                 // outer if
        if (num == 0) {            // nested if
            printf("The number is Zero\n");
        } else {
            printf("The number is Positive\n");
        }
    } else {                        // outer else
        printf("The number is Negative\n");
    }

    return 0;
}