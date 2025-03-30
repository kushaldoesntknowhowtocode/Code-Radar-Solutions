#include <stdio.h>

int main() {
    char light;
    printf("Enter the traffic light color (R, G, Y): ");
    scanf(" %c", &light);

    switch (light) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}