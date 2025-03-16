#include <stdio.h>

void leapyear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }
}

int main() {
    int year;
    
    scanf("%d", &year);
    leapyear(year);
    return 0;
}
