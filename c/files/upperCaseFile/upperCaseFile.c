#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *ofp, *nfp;
    int c;

    ofp = fopen("file.txt", "r");
    if( ofp == NULL ){
        printf("Failed to open the file.");
        return -1;
    }

    nfp = fopen("temp.txt", "w+");
    if( nfp == NULL ){
        printf("Failed to open the file.");
        return -1;
    }

    while ((c=fgetc(ofp))!= EOF){
        if ( islower(c) )  
            c -= 32; // subtracting 32 from lowercase char will return the uppercase char
        
        fputc(c, nfp);
    }


    
    fclose(ofp);
    ofp = NULL;
    fclose(nfp);
    nfp = NULL;

    // Remove original and temp files and rename the temp file to the original
    remove("file.txt");
    rename("temp.txt", "file.txt");
    remove("temp.txt");
    

    return 0;
}