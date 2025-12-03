#include <stdio.h>

// Define enum for user roles
enum UserRole {
    ADMIN,  // 0
    USER,   // 1
    GUEST   // 2
};

int main() {
    enum UserRole role;

    printf("Enum names with their integer values:\n");

    // Loop through enum values
    for (role = ADMIN; role <= GUEST; role++) {
        switch(role) {
            case ADMIN:
                printf("ADMIN = %d\n", ADMIN);
                break;
            case USER:
                printf("USER = %d\n", USER);
                break;
            case GUEST:
                printf("GUEST = %d\n", GUEST);
                break;
        }
    }

    return 0;
}