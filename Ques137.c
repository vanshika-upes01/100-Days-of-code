#include <stdio.h>

// Define enum for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    printf("Enter your role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    int input;
    scanf("%d", &input);
    role = input;

    switch(role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;
        default:
            printf("Invalid role!\n");
    }

    return 0;
}