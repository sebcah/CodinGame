#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    scanf("%d", &n); fgetc(stdin);
    //char temps[256]; // the n temperatures expressed as integers ranging from -273 to 5526
    //fgets(temps,256,stdin); // the n temperatures expressed as integers ranging from -273 to 5526
    
    int tempMinPos=5526;
    int tempMinNeg=-5526;
    int temps;
    int tempMin;
    
    if (n==0)
        printf("0\n");
    else {
            for(int i = 0; i < n; i++) 
            {
                scanf("%d", &temps);
                fprintf(stderr,"temps= %d \n",temps);
                //temps = -273;
                if (temps < 0){
                    if ( tempMinNeg < temps )
                    tempMinNeg = temps;
                }
                else {
                    if ( tempMinPos > temps )
                    tempMinPos = temps;
                }
            }
            
            if (fabs(tempMinPos) == fabs(tempMinNeg))
                tempMin = tempMinPos;
            if (fabs(tempMinPos) < fabs(tempMinNeg))
                tempMin = tempMinPos;
            if (fabs(tempMinPos) > fabs(tempMinNeg))
                tempMin = tempMinNeg;    

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

        printf("%d\n",tempMin);
    }
    return 0;
}