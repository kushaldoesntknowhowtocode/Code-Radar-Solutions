#include <stdio.h>

int main() {
    int number, bit_position;

    // Read the inputs

    scanf("%d", &number);
    
    scanf("%d", &bit_position);

    // Toggle the nth bit
    int result = number ^ (1 << bit_position);

    // Print the result
    printf("%d\n", result);

    return 0;
}
