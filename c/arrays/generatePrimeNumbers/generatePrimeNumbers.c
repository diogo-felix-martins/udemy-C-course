#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    int counter = 0;
        for ( int i = 1; i <= num; i++ ) {
            if ( num%i == 0 ) {
                counter++;
            }
        }

        if ( counter == 2 ) {
            return true;
        }
        else {
            return false;
        }
}


int main(){
    const int maxNumber = 100; // Generate prime numbers until this value
    // stores the generated prime numbers
    int primeNumbers[50] = {2, 3}; // TODO: Calculate the number of primes in the interval to find the optimal array size avoiding wasting memory

    // Check if it is prime and add it to the array
    int lastInsertedIndex = 1;
    for ( int i = 4; i <= maxNumber ; i++)
    {
        if ( isPrime(i) )
            primeNumbers[++lastInsertedIndex] = i;
    }

    // Print the values stored in the array
    size_t arraySize = sizeof(primeNumbers)/sizeof(primeNumbers[0]);
    for (int i = 0 ; i < arraySize; i++)
    {
        printf("primeNumbers[%i]= %i\n", i, primeNumbers[i]);
    }
    return 0;
}