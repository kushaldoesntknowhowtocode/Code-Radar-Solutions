#include <stdio.h>

int main() {
    int age, citizenship;
    scanf("%d %d", &age, &citizenship);

    if (age >= 18 && citizenship == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}