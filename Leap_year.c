// WRITE A PROGRAME TO FIND WHEATHER A YEAR ENTERED BY THE USER IS LEAP YEAR OR NOT. TAKE YEAR AS AN INPUT FROM THE USER.
// To determine whether a year is a leap year, follow these steps:

// 1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
// 2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
// 3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
// 4. The year is a leap year (it has 366 days).
// 5. The year is not a leap year (it has 365 days).
// above steps statements is --> ((year % 4 == 0) || year % 100 == 0 || year % 400 == 0)
#include <stdio.h>

int main()
{
    int year;
    printf(" Enter your year \n");
    scanf("%d", &year);
    if ((year % 4 == 0) || year % 100 == 0 || year % 400 == 0)
    {
        printf("%d is leap year", year);
    }
    else
    {
        printf("%d is not leap year", year);
    }
    return 0;
}