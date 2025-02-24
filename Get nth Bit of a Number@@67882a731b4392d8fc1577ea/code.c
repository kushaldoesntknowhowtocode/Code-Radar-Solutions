#include <stdio.h>

int main() {
    int num, bit_position;

    // Read the inputs
    
    scanf("%d", &num);
   
    scanf("%d", &bit_position);

    // Calculate the nth bit value
    int bit_value = (num >> bit_position) & 1;

    // Print the result
    printf("%d\n",bit_value);

    return 0;
}
