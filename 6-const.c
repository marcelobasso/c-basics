#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    n = 3;

    const c = 3;
    c = 4; // error because it's a const
    // not realy hard to understand

    return 0;
}