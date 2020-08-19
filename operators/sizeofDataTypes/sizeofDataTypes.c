#include <stdio.h>

int main(){
    printf("Size of the following data types: \n");
    printf("int: %zd bytes\n", sizeof(int));
    printf("char: %zd bytes\n", sizeof(char));
    printf("long: %zd bytes\n", sizeof(long));
    printf("long long: %zd bytes\n", sizeof(long long));
    printf("double: %zd bytes\n", sizeof(double));
    printf("long double: %zd bytes\n", sizeof(long double));

    return 0;
}