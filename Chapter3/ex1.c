#include <stdio.h>

// Exercise 3.1 from King
// By Max Parisi
// finished 1/8/2019

int main(void)
{
	int day, month, year;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d /%d /%d", &month, &day, &year);
	printf("You entered the date %.4d%.2d%.2d\n", year, month, day);
	return 0;
}
