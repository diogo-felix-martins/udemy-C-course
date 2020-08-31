#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");
    if( fp == NULL ){
        printf("Failed to open the file.");
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    int fileLength = ftell(fp);
    
    for ( int currentPos = 1 ; currentPos <= fileLength ; currentPos++){
        fseek(fp, -currentPos, SEEK_END);
        c=fgetc(fp);
        printf("%c", c);   
    }
    
    fclose(fp);
    fp = NULL;
    return 0;
}