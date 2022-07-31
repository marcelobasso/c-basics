#include <stdio.h>
#include <stdlib.h>

int main() {
    int d = 8; // %d
    printf("%d\n", d);
    printf("%d\n", 500);

    char s[] = "Octavio"; // %s
    printf("%s\n", s);
    printf("%s\n", "carlos");
    printf("name: %s, number: %d", s, d);

    // %f = decimal (float, double)
    // %c = single character (char)

    return 0;
}