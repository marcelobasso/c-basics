#include <stdio.h>
#include <stdlib.h>

double sum(double n1, double n2) {
    return n1 + n2;
}

int main() {
    double n1;
    double n2;

    printf("Enter first number: ");
    scanf("%lf", &n1);
    printf("Enter second number: ");
    scanf("%lf", &n2);
    printf("The sum of the two numbers is: %.2f", sum(n1, n2));
    // returns result with 2 decimal places thanks to ".2" before lf

    return 0;
}