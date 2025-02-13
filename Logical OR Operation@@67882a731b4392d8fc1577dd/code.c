#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    
    scanf("%d", &num1);
    
    scanf("%d", &num2);

    // Check if at least one of the numbers is greater than zero
    if (num1 > 0 || num2 > 0) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
