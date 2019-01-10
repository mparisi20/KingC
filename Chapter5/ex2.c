#include <stdio.h>

// Exercise 5.2 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	int hours, minutes;
	printf("Enter a 24-hour time: ");
	scanf("%d :%d", &hours, &minutes);
	
	if ((hours > 23 || hours < 0) || (minutes > 59 || minutes < 0)) {
		printf("Invalid time provided.\n");
		return 1;
	}
	
	if (hours < 12)
		printf("Equivalent 12-hour time: %d:%.2d AM\n", 
			hours == 0 ? hours+12 : hours, minutes);
	else
		printf("Equivalent 12-hour time: %d:%.2d PM\n", 
			hours == 12 ? hours : hours-12, minutes);
	
	return 0;
}
