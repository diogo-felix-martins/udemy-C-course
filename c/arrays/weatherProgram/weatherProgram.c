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
    for (int year = 0 ; year < numberYears ; year++)
        for (int month = 0 ; month < 12 ; month++)
            rainData[year][month] = generateRandomFloat(10);
    
    // Calculates and prints the yearly total table
    printf("YEAR    RAINFALL\n");
    printf("----------------\n");
    float yearsSum = 0;
    for (int year = 0 ; year < numberYears ; year++){
        float yearTotal = 0;

        for (int month = 0 ; month < 12 ; month++)
        {
            yearTotal += rainData[year][month];
            monthlyAverages[month] += rainData[year][month];
        }

        printf("201%d      %.1f\n", year, yearTotal);
        yearsSum += yearTotal;
    }

    printf("\nYearly average: %.1f\n", yearsSum / numberYears );
    
    // Print the monthly averages data previously calculated
    printf("\nMONTHLY AVERAGES:\n");
    for (int month = 0 ; month < 12 ; month++)
    {
        printf("Month %d: %.1f\n", month+1, monthlyAverages[month] / numberYears);
    }

    return 0;
}