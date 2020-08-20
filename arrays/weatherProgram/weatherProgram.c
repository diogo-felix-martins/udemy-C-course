#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

float generateRandomFloat(int maxNumber){
    float a = 5.0;
    return ((float)rand()/(float)(RAND_MAX)) * a;
}

int main(){
    srand((unsigned int)time(NULL)); // seeds the random number generator

    const int numberYears = 5;
    float rainData[numberYears][12]; // array containing the monthly rain data of several years
    memset( rainData, 0, numberYears*12*sizeof(float) ); // array initialization
    float monthlyAverages[12] = {0};

    // Fill the rainData array with random numbers
    for (int i = 0 ; i < numberYears ; i++)
        for (int j = 0 ; j < 12 ; j++)
            rainData[i][j] = generateRandomFloat(10);
    
    // Calculates and prints the yearly total table
    printf("YEAR    RAINFALL\n");
    printf("----------------\n");
    float yearsSum = 0;
    for (int i = 0 ; i < numberYears ; i++){
        float yearTotal = 0;

        for (int j = 0 ; j < 12 ; j++)
        {
            yearTotal += rainData[i][j];
            monthlyAverages[j] += rainData[i][j];
        }

        printf("201%d      %.1f\n", i, yearTotal);
        yearsSum += yearTotal;
    }

    printf("\nYearly average: %.1f\n", yearsSum / numberYears );
    
    // Print the monthly averages data previously calculated
    printf("\nMONTHLY AVERAGES:\n");
    for (int j = 0 ; j < 12 ; j++)
    {
        printf("Month %d: %.1f\n", j+1, monthlyAverages[j] / numberYears);
    }
    
    return 0;
}