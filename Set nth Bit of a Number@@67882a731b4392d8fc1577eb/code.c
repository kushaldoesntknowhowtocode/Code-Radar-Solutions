#include <stdio.h>

int main() {
    int number, position;

    scanf("%d", &number);

    scanf("%d", &position);

    number = number | (1 << position); // Set the nth bit using bitwise OR and shift

    printf("%d\n", number);

    return 0;
}
