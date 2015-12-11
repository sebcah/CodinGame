#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int road; // the length of the road before the gap.
    scanf("%d", &road);
    int gap; // the length of the gap.
    scanf("%d", &gap);
    int platform; // the length of the landing platform.
    scanf("%d", &platform);
    int jump =0;

    // game loop
    while (1) {
        int speed; // the motorbike's speed.
        scanf("%d", &speed);
        int coordX; // the position on the road of the motorbike.
        scanf("%d", &coordX);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        
        if (jump == 1)
        {
            printf("SLOW\n");
        }
        
        else 
        {
            if (speed <= gap)
            {
                printf("SPEED\n"); // keywords: SPEED, SLOW, JUMP, WAIT.
            }
            else if (speed > gap+1)
            {
                printf("SLOW\n");
            }
            else if (coordX == road-1)
            {
                printf("JUMP\n");
                jump = 1;
            }
            else
            {
                printf("WAIT\n");
            }
        }
        fprintf(stderr, "road %d, speed %d,gap %d, plat %d, coordX %d\n", road, speed, gap, platform, coordX);
    }

    return 0;
}