#include <stdio.h>

int main() {
    int num;
    
    // Read the input
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // Define the mask for the MSB (assuming 32-bit integer)
    int msb_mask = 1 << 31;
    
    // Check the MSB
    if (num & msb_mask) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    
    return 0;
}
