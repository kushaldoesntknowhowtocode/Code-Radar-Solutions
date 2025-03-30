#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;


    scanf("%d %d", &num1, &num2);
    scanf(" %c", &operator);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("%f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
