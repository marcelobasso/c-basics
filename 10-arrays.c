#include <stdio.h>
#include <stdlib.h>

int sumArray(const int a[], const int size);

void main() {
    int luckyNumbers[] = {4, 6, 15, 12, 6};
    int size = sizeof(luckyNumbers)/sizeof(int);
    // sizeof() returns the array size in bytes!

    for (int c = 0; c < size; c++) printf("%d ", luckyNumbers[c]);
    printf("\nthe sum of the array items is: %d", sumArray(luckyNumbers, size));
}

int sumArray(const int a[], const int size) {
    int sum;
    for (int c = 0; c < size; c++) sum += a[c];

    return sum;
}
