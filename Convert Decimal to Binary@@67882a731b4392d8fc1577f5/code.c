#include <stdio.h>

int main() {
    int decimal, remainder;
    int binary = 0, place = 1;

    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;     // Get the last binary digit
        binary += remainder * place; // Build the binary number
        decimal /= 2;                // Move to the next bit
        place *= 10;                 // Shift place value to left
    }

    printf("%d", binary);

    return 0;
}
