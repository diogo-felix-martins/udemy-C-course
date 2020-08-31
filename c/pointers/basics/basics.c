#include <stdio.h>

int main () {
    int value = 10;
    int *pvalue = &value;

    printf("Variable's address: %p\n", &value); 
    printf("Pointer's address: %p\n", (void*)&pvalue); 
    printf("Pointer's value: %p\n", pvalue);
    printf("Value the pointer is pointing to: %d\n", *pvalue);

    return 0;
}