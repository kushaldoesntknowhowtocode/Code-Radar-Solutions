#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];

    // Input user's name, age, and favorite hobby
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your favorite hobby: ");
    scanf("%s", hobby);

    // Print user's name, age, and favorite hobby
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
