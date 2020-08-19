#include <stdio.h>

int main(){
    const int minutesInYear = 60 * 24 * 365; // minutesinYour * hoursInDay * daysInYear ~= minutesInYear
    const int minutesInDay = 60 * 24; // minutesinYour * hoursInDay ~= minutesInDay
    int minutes;
    double years, days;
    
    printf("Insert the number of minutes to convert: ");
    scanf("%d", &minutes);
    
    days = (double)minutes / (double)minutesInDay;
    years = (double)minutes / (double)minutesInYear;
    
    printf("Days: %lf\n", days);
    printf("Years: %lf\n", years);

    return 0;
}