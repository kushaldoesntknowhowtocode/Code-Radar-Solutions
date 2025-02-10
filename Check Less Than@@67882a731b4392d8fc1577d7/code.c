#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // Corrected the format specifier
    if (a < b) {
        printf("True\n"); // Added a newline character for better output formatting
    } else {
        printf("False\n"); // Added a newline character for better output formatting
    }
    return 0;
}
