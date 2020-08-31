#include <stdio.h>

// Finds the greatest common divisor between two numbers
int greatestCommonDivisor (int x, int y){
    if (x == 0){
        return y;
    }else if ( y == 0 ){
        return x;
    }else{
        if (x > y)
            greatestCommonDivisor(y, x % y);
    }
}

// Calculates the absolute value of a number
int absoluteValue (float number){
    if (number < 0)
        number *= -1;

    return number;
}

// Calculates the square root of a number
float squareRoot (float number) {
    float aux = 1;

    for ( int i = 0 ; i < 10 ; i++ ){
        aux = (aux + number / aux) / 2;
    }

    return aux;
}

int main(){

    printf("GCD: %d\n", greatestCommonDivisor(327,138));
    printf("Absolute Value: %d\n", absoluteValue(-4223.3));
    printf("Absolute Value: %.2f", squareRoot(421.432));
    return 0;
}