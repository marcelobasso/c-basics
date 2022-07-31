#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("%f\n", 8.9); // decimal
    printf("%f\n", 5 + 4.5); // convert result to float
    printf("%d\n", (int)pow(2, 3)); // 2 cubed (convert the float return to an int)
    printf("%f\n", sqrt(6)); // square root
    printf("%f\n", ceil(3.57)); // round up
    printf("%f\n", floor(36.66)); // round down
    // every math function returns a float (?)

    return 0;
}