#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;

    // Input the radius of the circle
    
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Print the area of the circle
    printf("Area: %.2f\n", area);

    return 0;
}
