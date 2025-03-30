#include <stdio.h>

int main() {
    char grade;

    // Input: Read a grade character
    printf("Enter a grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    // Grade evaluation using switch-case
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0;
}