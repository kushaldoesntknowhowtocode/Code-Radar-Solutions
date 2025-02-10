
#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    // Input three numbers
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3;

    // Print the average
    printf("Average: %.2f\n", average);

    return 0;
}
