#include <stdio.h>

int main(){
    // Tax values constants
    const double taxFirst300Dollars = 0.15;
    const double taxNext150Dollars = 0.20;
    const double taxRemaining = 0.25;

    const double hourlyPay = 12.00;
    
    int weeklyHours = 0;
    double grossPay = 0;
    double taxes = 0;
    double netPay = 0;
    
    // Ask the user for input and verify if it is valid.
    printf("Number of hours worked in the week: \n");
    // scanf returns the number of items of the argument list successfully filled, if it is not 1 then the user did not input a number
    if(scanf("%d", &weeklyHours) != 1 || weeklyHours < 0) 
    {
        printf("Only positive numbers are allowed.\n");
        return 0;
    }
    
    // Calculate the gross pay considering overtime pay is 1.5 the hourly rate.
    grossPay = weeklyHours < 40 ? (weeklyHours * hourlyPay) : ((40 * hourlyPay) + ((weeklyHours - 40) * (hourlyPay * 1.5)));

    // Calculate the taxes
    if ( grossPay <= 300 )
    {
        taxes = grossPay * taxFirst300Dollars;
        printf("%lf", taxes);
    }
    else if ( grossPay <= 450 )
    {   
        taxes = 300 * taxFirst300Dollars;
        taxes += (grossPay - 300) * taxNext150Dollars;
        printf("%lf", taxes);
    }
    else
    {
        taxes = 300 * taxFirst300Dollars;
        taxes += 150 * taxNext150Dollars;
        taxes += (grossPay - 300 - 150) * taxRemaining;
    }
    
    // Calculate the net pay
    netPay = grossPay - taxes;
    
    // Display the results
    printf("Gross pay: %.2lf\n", grossPay);
    printf("Taxes: %.2lf\n", taxes);
    printf("Net pay: %.2lf\n", netPay);


    return 0;
}