#include <stdio.h>
#include <string.h>

void displayStringInReverse(const char text[]){
    int stringSize = strlen(text);
    
    printf("String %s in reverse: ", text);
    for ( int i = stringSize ; i > 0 ; i-- ){
        printf("%c", text[i]);
    }    
}

int main(){
    displayStringInReverse("ABCDEFGH");

    char stringArray[10][25], aux[25];
    int stringNumber = 0;

    printf("\n\nHow many strings will you input? (MAX 10)");
    scanf("%d", &stringNumber);

    for ( int i = 0 ; i < stringNumber ; i++ ){
        printf("Insert string %d: ", i + 1);
        scanf("%s", stringArray[i]);
    }


    // Bubble sort string array
    for ( int i = 0 ; i < stringNumber ; i++ ){
        printf("i:%d\n", i);
        for ( int j = 0 ; j < stringNumber - i ; j++ ){
            printf("j:%d\n", j);
            int comparison = strcmp(stringArray[j], stringArray[j+1]);
            if ( comparison > 0 ) {
                strncpy(aux,stringArray[j], sizeof(aux) - 1);
                strncpy(stringArray[j], stringArray[j+1], sizeof(aux) - 1);
                strncpy(stringArray[j+1], aux, sizeof(aux) - 1);
            }
        }
    }

    // Print sorted string array
    for ( int i = 0 ; i <= stringNumber; i++ ){
        printf("%s\n", stringArray[i]);
    }

    return 0;
}