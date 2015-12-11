#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{

    // game loop
    while (1) {
        int spaceX;
        int spaceY;
        int mountainTop = 0;
        int mountainPos = 0;
        scanf("%d%d", &spaceX, &spaceY);
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
            scanf("%d", &mountainH);
            if (mountainTop < mountainH)
                {
                    mountainPos = i;
                    mountainTop = mountainH;
                }
        }
            if (spaceX == mountainPos)
            {
                printf("FIRE\n");
            }
            else
            {
                printf("HOLD\n"); // either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
            }
            fprintf(stderr, "Debug messages...mountainPos = %d \n", mountainPos);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

    }

    return 0;
}