#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    // Stop execution if the number of arguments is wrong.
    if (argc != 3) {
        printf("Please input only the width and height of the rectangle as command line arguments.");
        return -1; 
    }
    
    double width, height, perimeter, area;
    char *eptr; // Variable used by strtod to convert the command line arguments into double.

    width = strtod(argv[1], &eptr);
    height = strtod(argv[2], &eptr);

    perimeter = (width + height) * 2;
    area = width * height;

    printf("Perimeter: %.2lf\n", perimeter);
    printf("Area: %.2lf\n", area);
    return 0;
}