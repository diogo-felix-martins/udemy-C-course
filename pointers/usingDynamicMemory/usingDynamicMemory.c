#include <stdio.h>
#include <stdlib.h>

int main(){
    int stringSize = 0;

    printf("Size of the string: ");
    scanf("%d", &stringSize);

    char *text = (char*)malloc(stringSize * sizeof(char));

    printf("\nInput the string: ");
    scanf("%s", text);

    if (!text){ // memory allocation failed end the program
        printf("Memory allocation failed.");
        return 0;
    }

    printf("\nThe string inputted was: %s", text);
    printf("\nThe address of the first char is: %p", text);

    free(text);
    text = NULL;

    return 0;
}