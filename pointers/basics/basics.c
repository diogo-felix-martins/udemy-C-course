#include <stdio.h>

int main () {
    int value = 10;
    int *pvalue = &value;

    printf("Variable's address: %d\n", &value); 
    printf("Pointer's address: %d\n", (void*)&pvalue); 
    printf("Pointer's value: %p\n", pvalue);
    printf("Value the pointer is pointing to: %d\n", *pvalue);

    return 0;
}