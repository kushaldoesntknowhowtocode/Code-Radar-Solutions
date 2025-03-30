#include <stdio.h>

int main() {
    int N, i;

    scanf("%d", &N);  // Input the number for which the table needs to be printed



    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);  // Print each line of the table
    }

    return 0;
}