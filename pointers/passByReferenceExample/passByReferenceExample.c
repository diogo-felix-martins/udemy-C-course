#include <stdio.h>
#include <math.h>

void square(int *pnum){
    *pnum *= *pnum;
}

int main(){
    int value = 4;
    
    square(&value);

    printf("Square: %d", value);

    return 0;
}