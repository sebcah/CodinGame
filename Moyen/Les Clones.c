#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int nbFloors; // number of floors
    int width; // width of the area
    int nbRounds; // maximum number of rounds
    int exitFloor; // floor on which the exit is found
    int exitPos; // position of the exit on its floor
    int nbTotalClones; // number of generated clones
    int nbAdditionalElevators; // ignore (always zero)
    int nbElevators; // number of elevators
    scanf("%d%d%d%d%d%d%d%d", &nbFloors, &width, &nbRounds, &exitFloor, &exitPos, &nbTotalClones, &nbAdditionalElevators, &nbElevators);
    fprintf(stderr, "nbFloors %d, width %d, nbRounds %d, exitFloor %d, exitPos %d, nbTotalClones %d, nbAdditionalElevators %d, nbElevators %d\n", nbFloors, width, nbRounds, exitFloor, exitPos, nbTotalClones, nbAdditionalElevators, nbElevators);
    
    int elevatorFloor = 0; // floor on which this elevator is found
    int elevatorPos = 0; // position of the elevator on its floor
    
    for (int i = 0; i < nbElevators; i++) {
        scanf("%d%d", &elevatorFloor, &elevatorPos);
        fprintf(stderr, "elevatorFloor %d, elevatorPos %d\n",elevatorFloor,elevatorPos);
    }

    // game loop
    while (1) {
        int cloneFloor; // floor of the leading clone
        int clonePos; // position of the leading clone on its floor
        char direction[11]; // direction of the leading clone: LEFT or RIGHT
        scanf("%d%d%s", &cloneFloor, &clonePos, direction);
        fprintf(stderr, "cloneFloor %d, clonePos %d, direction %s\n",cloneFloor,clonePos,direction);
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        if (strcmp(direction,"RIGHT")==0 && clonePos > elevatorPos)
            printf("BLOCK\n"); // action: WAIT or BLOCK
        else
            printf("WAIT\n"); // action: WAIT or BLOCK
    }

    return 0;
}