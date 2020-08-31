#include <stdio.h>

int main(){
    const double minutesInYear = 60 * 24 * 365; // minutesinYour * hoursInDay * daysInYear ~= minutesInYear
    const double minutesInDay = 60 * 24; // minutesinYour * hoursInDay ~= minutesInDay
    int minutes;
    double years, days;
    
    printf("Insert the number of minutes to convert: ");
    scanf("%d", &minutes);
    
    days = minutes / minutesInDay;
    years = minutes / minutesInYear;
    
    printf("Days: %lf\n", days);
    printf("Years: %lf\n", years);

    return 0;
}