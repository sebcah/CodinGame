#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Don't let the machines win. You are humanity's last hope...
 **/
int main()
{
    int width; // the number of cells on the X axis
    scanf("%d", &width); fgetc(stdin);
    int height; // the number of cells on the Y axis
    scanf("%d", &height); fgetc(stdin);
    for (int i = 0; i < height; i++) {
        char line[31]; // width characters, each either 0 or .
        fgets(line,31,stdin); // width characters, each either 0 or .
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("0 0 1 0 0 1\n"); // Three coordinates: a node, its right neighbor, its bottom neighbor

    return 0;
}