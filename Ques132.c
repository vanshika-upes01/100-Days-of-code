#include <stdio.h>

// Define enumeration for traffic lights
enum TrafficLight {
    RED,     // 0
    YELLOW,  // 1
    GREEN    // 2
};

int main() {
    enum TrafficLight light;

    // Iterate through all traffic light values
    for (light = RED; light <= GREEN; light++) {
        switch(light) {
            case RED:
                printf("RED: Stop\n");
                break;
            case YELLOW:
                printf("YELLOW: Wait\n");
                break;
            case GREEN:
                printf("GREEN: Go\n");
                break;
        }
    }

    return 0;
}