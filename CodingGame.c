#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * CodinGame planet is being attacked by slimy insectoid aliens.
 * <---
 * Hint:To protect the planet, you can implement the pseudo-code provided in the statement, below the player.
 **/
 
 char *mechant(int dist1,int dist2,char *enemy1,char enemy2[]){ //https://fr.wikibooks.org/wiki/Programmation_C/Tableaux
        fprintf(stderr, "E1:%s\n",enemy1);
        fprintf(stderr, "E2:%s\n",enemy2);
        if (dist1 > dist2)
                return enemy2;
        else
                return enemy1;   
}
 
int main()
{

    // game loop
    while (1) {
        char enemy1[256]; // name of enemy 1
        scanf("%s", enemy1);
        int dist1; // distance to enemy 1
        scanf("%d", &dist1);
        
        char enemy2[256]; // name of enemy 2
        scanf("%s", enemy2);
        int dist2; // distance to enemy 2
        scanf("%d", &dist2);
        
        //printf("En1 = %s, Dist1 = %d \n", enemy1, dist1); 
        //printf("En2 = %s, Dist2 = %d \n", enemy2, dist2);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        char enemy[256];
        strcpy (enemy,mechant(dist1,dist2,enemy1,enemy2));
        
        printf("%s\n", enemy);
    }
    return 0;
}

