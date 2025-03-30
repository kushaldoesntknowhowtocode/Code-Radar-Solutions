#include <stdio.h>

int main() {
    int number;

 
    scanf("%d", &number); // Taking input from the user

    if (number > 0) {
        printf("Positive\n");
    } else if (number == 0) {
        printf("Zero\n");
    } else {
        printf("Negative\n");
    }

    return 0;
}