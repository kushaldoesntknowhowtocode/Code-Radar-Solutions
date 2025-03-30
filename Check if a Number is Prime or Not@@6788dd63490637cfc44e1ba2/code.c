#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

   
    scanf("%d", &number); // Taking input from the user

    if (number <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check divisors from 2 to the square root of the number
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0; // Number is divisible by i, so it's not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime");
    } else {
        printf("not Prime");
    }

    return 0;
}