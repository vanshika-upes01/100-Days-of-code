#include <stdio.h>

// Define enum for user roles with explicit values
enum UserRole {
    ADMIN = 5,
    USER = 10,
    GUEST = 20
};

int main() {
    printf("Enum values demonstrating they store integers:\n");
    printf("ADMIN = %d\n", ADMIN);
    printf("USER = %d\n", USER);
    printf("GUEST = %d\n", GUEST);

    return 0;
}