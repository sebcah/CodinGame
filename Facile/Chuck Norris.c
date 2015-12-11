#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    char MESSAGE[100];
    fgets(MESSAGE,100,stdin);
    
    int N = strlen(MESSAGE)-1;
    int k = 0;
    
    int Chuck[N][7];

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    
    for (int j=0;j<N;j++){
        for (int i=0;i<7;i++){
        Chuck[j][6-i] = MESSAGE[j]>>i & 1; //passage en binaire
        }
    }

      fprintf(stderr, "\n");
       for (int i=0;i<N*7;i++){ 
            fprintf(stderr, "%d", Chuck[0][i]);
       }

        fprintf(stderr, "\n");

    if (Chuck[0][0]==1) // gestion 1er caractère
        printf("0 ");
    else
        printf("00 ");

  for (int i=0;i<N*7;i++){
        if (Chuck[0][i]==1) {
            printf("0");
            if (Chuck[0][i+1]==0 && i !=(N*7)-1)
            printf(" 00 ");
       }
        else if (Chuck[0][i]==0){
            printf("0");
            if (Chuck[0][i+1]==1 && i !=(N*7)-1)
            printf(" 0 ");
        }
   }
    return 0;
}