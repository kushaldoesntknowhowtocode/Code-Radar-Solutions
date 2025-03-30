#include <stdio.h>
#include <math.h> // For using sqrt() if needed, though not required here

int main() {
    double num1, num2;

    // Input both numbers
  
    scanf("%lf", &num1);
    
    scanf("%lf", &num2);

    // Check if the first number is the square root of the second
    if (num1 * num1 == num2) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}