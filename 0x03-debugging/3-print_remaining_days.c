#include <stdio.h>
#include "main.h"
/**
 * is_leap_year - a function to check if a given year is a leap year
 * @year: year
 * Return: 1 if leap year 0 otherwise.
 */
int is_leap_year(int year)
{
	if (year % 100 == 0 || (year % 100 != 0 && year % 4 == 0))
		return (1);
	return (0);
}
/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if (is_leap_year(year) == 1)
	{
		if ((month > 2 && day >= 60) || (month == 2 && day < 60))
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

