#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);
    
    int thorX = initialTX;
    int thorY = initialTY;
    char directionX[] = "";
    char directionY[]= "";
    char direction[] = "";
    
    //printf("dirext = %s",directionY);
    
    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        scanf("%d", &remainingTurns);
        
        direction[0] = '\0';
        directionX[0] = '\0';
        directionY[0] = '\0';

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
         
        if (thorY > lightY) 
        {
            strcpy (directionY,"N");
            thorY--;
        }
        
        else if (thorY < lightY)
        {
            strcpy (directionY,"S");
            thorY++;
        }
        
        strcat(direction,directionY);
         
        if (thorX > lightX) 
        {
            strcpy (directionX,"W");
            thorX--;
        }
        else if (thorX < lightX)
        {
            strcpy (directionX,"E");
            thorX++;
        }

        strcat(direction,directionX);
        
        printf("%s\n",direction);
        
        fprintf(stderr, "ThorX = %d, ThorY = %d \n",thorX,thorY);
        
    }
    return 0;
}
