#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int X0, Xmin, Xmax, Xmid = 0;
    int Y0 = 0;
    int surfaceN; // the number of points used to draw the surface of Mars.
    scanf("%d", &surfaceN);
    for (int i = 0; i < surfaceN; i++) {
        int landX; // X coordinate of a surface point. (0 to 6999)
        int landY; // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
        scanf("%d%d", &landX, &landY);
        
        if (Y0 == landY){
        Xmax = landX;
        Xmin = X0;
        }
        X0 = landX;
        Y0 = landY;
        Xmid = (Xmax + Xmin)/2;
        
        fprintf(stderr, "landX:%d-land:Y%d\n",landX,landY);
    }
    fprintf(stderr, "Xmin:%d-Xmax:%d\n",Xmin,Xmax,Xmid);

    // game loop
    while (1) {
        int X;
        int Y;
        int hSpeed; // the horizontal speed (in m/s), can be negative.
        int vSpeed; // the vertical speed (in m/s), can be negative.
        int fuel; // the quantity of remaining fuel in liters.
        int rotate; // the rotation angle in degrees (-90 to 90).
        int power; // the thrust power (0 to 4).
        scanf("%d%d%d%d%d%d%d", &X, &Y, &hSpeed, &vSpeed, &fuel, &rotate, &power);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        
        int Xdelta = X-Xmid;

            if (X<Xmid)
                printf("-22 4\n");
            if (X>Xmid)
                printf("22 4\n");
            if ( X>Xmin && X<Xmax)
                printf("0 0\n");

        fprintf(stderr, "rotate:%d\n",rotate);
        fprintf(stderr, "rotate:%d\n",rotate);
    }

    return 0;
}