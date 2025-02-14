#include <stdio.h>

int main() {
    int num1;

    // Input a number from the user

    scanf("%d", &num1);

    // Check if the number is not greater than zero
    if (!(num1 > 0)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
