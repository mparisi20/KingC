#include <stdio.h>

// Exercise 7.9 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	int hours, minutes;
	char am_or_pm;
	printf("Enter a 12-hour time: ");
	scanf("%d :%d %c", &hours, &minutes, &am_or_pm);
	am_or_pm = toupper(am_or_pm);
	if (hours == 12 && am_or_pm == 'A')
		hours = 0;
	else if (hours != 12 && am_or_pm == 'P')
		hours += 12;
	else // it's either 12:xx PM or 1:xx-11:xx AM... no need to change anything
		;
	printf("Equivalent 24-hour time: %d:%.2d\n", hours, minutes);
	return 0;
}
