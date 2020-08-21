#include <stdio.h>

int countCharinString(const char *pchar){
    int count = 0;

    while (*pchar){ // Will stop ate the end of the string \0
        *pchar++;
        count++;
    }
    
    return count;
}

int main(){
    char text[] = "ABCDs";
    char *pchar = text;

    printf("StrLen: %d", countCharinString(text));
    return 0;
}