#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse.
 * the standard input according to the problem statement.
 **/
int main()
{
    int L;
    scanf("%d", &L); fgetc(stdin);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[256]; // mot entré
    fgets(T,256,stdin);
    char Letter[strlen(T)];
    
    for (int i=0; i<strlen(T) ; i++){
        if (T[i] < 65 || T[i] >122 )
            Letter[i] = 26;
        else if (T[i] < 91)
            Letter[i] = (T[i]-65); // position de la lettre MAJ
        else
            Letter[i] = (T[i]-97); // position de la lettre min
           // fprintf(stderr, "%d,%d,",T[i],Letter[i]);
        }
    
    //fprintf(stderr, "strlen(T)=%d, L=%d, T=%s, Letter=%d\n", strlen(T), L, T, Letter[0]);
    
    for (int i = 0; i < H; i++) {
        char ROW[1024];
        fgets(ROW,1024,stdin);
        
        for (int k=0 ; k < strlen(T)-1; k++ ){
            for (int j = 0; j < L; j++) {
               printf("%c",ROW[Letter[k]*L+j]);
            }
        }
        printf("\n");
    }
    
    // To debug: fprintf(stderr, "Debug messages...\n");

    return 0;
}