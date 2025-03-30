#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || c == a) {
        printf("Isoceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}