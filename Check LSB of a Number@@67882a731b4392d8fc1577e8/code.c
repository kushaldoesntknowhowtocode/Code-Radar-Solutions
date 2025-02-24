#include <stdio.h>

int main() {
    int num;
    // Read the input
    scanf("%d", &num);
    // Check the LSB
    if (num & 1) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    return 0;
}
