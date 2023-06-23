#include "main.h"

/**
* print_remaining_days - takes a date and print many years
*left in years, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of year. %d\n", day);
printf("Remaing days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invarid date %02d%02d%04d\n", month, day - 31, year);
}
else
{
printf("Days of year: %d\n", day);
printf("Remaing days: %d\n", 365 - day);
}
}
}
