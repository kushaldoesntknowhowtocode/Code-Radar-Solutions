#include <stdio.h>

// Function to find the position of the lowest set bit
int getLowestSetBitPosition(int num) {
    if (num == 0) {
        return -1; // No set bit in zero
    }
    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }
    return position;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int position = getLowestSetBitPosition(num);
    if (position == -1) {
        printf();
    } else {
        printf("%d\n", position);
    }

    return 0;
}
