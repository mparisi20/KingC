#include <stdio.h>

// Exercise 6.10 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	int ed_day, ed_month, ed_year, day, month, year;
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d /%d /%d", &month, &day, &year);
	if (day == 0 && month == 0 && year == 0)
		return 0;
	ed_day = day;
	ed_month = month;
	ed_year = year;
	for (;;) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d /%d /%d", &month, &day, &year);
		if (day == 0 && month == 0 && year == 0)
			break;

		if (year < ed_year ||
			(year == ed_year) && month < ed_month ||
			(year == ed_year) && (month == ed_month) && (day < ed_day)) {
				ed_year = year;
				ed_month = month;
				ed_day = day;
		}
	}
	printf("%d/%d/%.2d is the earliest date\n", ed_month, ed_day, ed_year);

	return 0;
}
