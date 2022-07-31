#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    printf("What's your age?\nAge: ");
    scanf("%d", &age);
    printf("U have %d years\n", age);

    double gpa;
    printf("\nWhat's your GPA?\nGPA: ");
    scanf("%lf", &gpa);
    printf("Your GPA is: %lf", gpa);

    return 0;
}