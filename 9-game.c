#include <stdio.h>
#include <stdlib.h>

int main() {
    char color[20]; // color up to 20 characters
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a color: ");
    scanf("%s", color); // when receiving a string, & isn't needed

    printf("Enter a pluralNoun: ");
    scanf("%s", pluralNoun);

    printf("Enter a celebrity: ");
    scanf("%s", celebrity);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s", celebrity);

    return 0;
}