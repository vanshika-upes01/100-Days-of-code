#include <stdio.h>

// Define enum with explicit values starting from 10
enum Status {
    SUCCESS = 10,
    FAILURE,    // 11
    TIMEOUT     // 12
};

int main() {
    enum Status code;

    printf("Enum values:\n");
    for (code = SUCCESS; code <= TIMEOUT; code++) {
        switch(code) {
            case SUCCESS:
                printf("SUCCESS = %d\n", SUCCESS);
                break;
            case FAILURE:
                printf("FAILURE = %d\n", FAILURE);
                break;
            case TIMEOUT:
                printf("TIMEOUT = %d\n", TIMEOUT);
                break;
        }
    }

    return 0;
}