#include <stdio.h>

int main() {
    int number, bit_position;

    // Read the inputs
    
    scanf("%d", &number);
    
    scanf("%d", &bit_position);

    // Create a mask to clear the nth bit
    int mask = ~(1 << bit_position);

    // Clear the nth bit
    int result = number & mask;

    // Print the result
    printf("%d\n", result);

    return 0;
}
