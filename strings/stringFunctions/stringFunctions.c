#include <stdio.h>
#include <stdlib.h>

int strLength(char text[]){
    int length = 0;
    while ( text[length] != '\0')
        length++;
    
    return length;
}

void strConcat(char result[], char text[], char text2[]){
    int textSize = strLength(text);
    int textSize2 = strLength(text2);

    for ( int i = 0 ; i < textSize ; i++)
        result[i] = text[i];
    
    for ( int i = 0 ; i < textSize2 ; i++)
        result[i + textSize] = text2[i];
}

_Bool strCompare(char text[], char text2[]){
    _Bool isEqual = 1;
    if (strLength(text) == strLength(text2)){
        for ( int i = 0 ; i < strLength(text) ; i++ ){
            if ( text[i] != text2[i] ){
                isEqual = 0;
                break;
            }
        }
    }else{
        isEqual = 0;
    }

    return isEqual;
}

int main(){
    char text[] = "ABCD";
    char text2[] = "ABCD";
    char strcatResult[10];

    printf("strlen: %d\n", strLength(text));
    strConcat(strcatResult, text, text2);
    printf("strConcat: %s\n", strcatResult);
    printf("strCompare: %d", strCompare(text, text2));

    return 0;
}