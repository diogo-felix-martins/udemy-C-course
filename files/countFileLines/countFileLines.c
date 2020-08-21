#include <stdio.h>

int main(){
    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");
    if( fp == NULL ){
        printf("Failed to open the file.");
        return -1;
    }

    int lineCount = 0;
    while ((c=fgetc(fp))!= EOF){
        if ( c == '\n')
            lineCount++;
    }

    printf("The file has %d lines.", lineCount);

    fclose(fp);
    fp = NULL;
    return 0;
}