#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N; // Number of elements which make up the association table.
    scanf("%d", &N); fgetc(stdin);
    int Q; // Number Q of file names to be analyzed.
    scanf("%de", &Q); fgetc(stdin);
    fprintf(stderr, "N:%d\n",N);
    fprintf(stderr, "Q:%d\n\n",Q);
    
    struct Fichier {
        char ext[101];
        char mt[501];
    };

    struct Fichier file[Q];
    char *filext;
    
    for (int i = 0; i < N; i++) {
        char EXT[101]; // file extension
        char MT[501]; // MIME type.
        scanf("%s%s", EXT, MT); fgetc(stdin);
        strcpy (file[i].ext, ".");
        
        strcat (file[i].ext, EXT);
        strcat (file[i].ext, "\n");
        strcpy (file[i].mt, MT);
        
        //fprintf(stderr, "EXT :%s",file[i].ext);
        //fprintf(stderr, "MT:%s\n\n",file[i].mt);
    }
    
    for (int i = 0; i < Q; i++) {
        char FNAME[501]; // One file name per line.
        fgets(FNAME,500,stdin); // One file name per line.
        //fprintf(stderr, "F[%d]: %s",i,FNAME);
        int flag = 0;
 
        for (int j = 0; j < N; j++){
            filext = strcasestr(FNAME,file[j].ext);//charche l'extension sans regarder la casse

            if (filext !=0 ){ //si on trouve une extension connue
                printf("%s\n",file[j].mt); // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
                flag = 1;
            }
        }
        
        if (flag == 0) // on n'a pas trouvé l'extension
            printf("UNKNOWN\n");
            
        //fprintf(stderr, "i=%d\n",i);
    }
    
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    
    return 0;
}