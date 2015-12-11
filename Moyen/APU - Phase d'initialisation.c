#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Don't let the machines win. You are humanity's last hope...
 **/
 
void recupligne (int height,int width, int point[][height]){
     
    for (int i = 0; i < height; i++) {
        char line[32]; // width characters, each either 0 or .
        fgets(line, 32, stdin); // width characters, each either 0 or .
        fprintf(stderr, "line %d:%s\n",i,line);
        
        for (int j = 0; j <width ; j++) {
            if (line[j] == '0'){
                point[j][i] = 1;
            }
            else{
                point[j][i] = 0;
            }
            fprintf(stderr, "point[%d][%d] :%d\n",j,i,point[j][i]);
        }
    }  
     return;
 }
 
int main()
{
    int width; // the number of cells on the X axis
    scanf("%d", &width); fgetc(stdin);
    int height; // the number of cells on the Y axis
    scanf("%d", &height); fgetc(stdin);
    
    fprintf(stderr, "width:%d\n",width); //largeur
    fprintf(stderr, "height:%d\n",height); //longueur
    
    int point[width][height];
    
    recupligne(height, width, point);
    
    int flagi = 0, flagj = 0;
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++){
            if (point[j][i] == 1){
                printf("%d %d ",j,i);
                for (int k = j +1 ; k < width; k++){
                if (point[k][i] == 1){
                    printf("%d %d ",k,i);
                    flagi = 1;
                    break;
                    }
                }
                if (flagi == 0)
                    printf("-1 -1 ");
                
                for (int k = i +1 ; k < height; k++){
                if (point[j][k] == 1){
                    printf("%d %d\n",j,k);
                    flagj = 1;
                    break;
                    }
                }
                if (flagj == 0)
                    printf("-1 -1\n");
                
               flagi = flagj = 0;
            }
        }
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    //printf("0 0 1 0 0 1\n"); // Three coordinates: a node, its right neighbor, its bottom neighbor

    return 0;
}