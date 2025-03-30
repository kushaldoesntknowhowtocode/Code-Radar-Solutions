#include <stdio.h>

int main() {
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);  // Read input from the user

    if ((i % 2) == 1) {
        printf("Odd\n");
    } else {
        printf("Even\n");
    }

    return 0;
}