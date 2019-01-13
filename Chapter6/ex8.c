#include <stdio.h>

// Exercise 6.8 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	int i, n, day;
	printf("Enter number of days in month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &day);
	if (day < 1 || day > 7) {
		printf("Invalid day of week given\n");
		return 1;
	}
	for (i = 1; i < day; i++)
		printf("   ");
	for (i = 1; i <= n; i++) {
		printf("%2d ", i);
		day++;
		if (day > 7) {
			printf("\n");
			day = 1; // day always represents the current day of the week as the calendar prints
		}
	}
	return 0;
}
