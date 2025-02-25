#include <stdio.h>

// Function to count the leading zeros in a 32-bit integer
int countLeadingZeros(int num) {
    if (num == 0) {
        return 32; // All bits are zero
    }
    
    int count = 0;
    while ((num & (1 << 31)) == 0) {
        num <<= 1;
        count++;
    }
    
    return count;
}

int main() {
    int num;
    
    scanf("%d", &num);
    
    int leadingZeros = countLeadingZeros(num);
    printf("%d\n", leadingZeros);

    return 0;
}
