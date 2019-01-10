#include <stdio.h>
#include <stdbool.h>

// Exercise 5.9 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	int dayA, monthA, yearA, dayB, monthB, yearB;
	bool Afirst = false;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d /%d /%d", &monthA, &dayA, &yearA);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d /%d /%d", &monthB, &dayB, &yearB);
	
	if (yearA < yearB)
		Afirst = true;
	else if ((yearA == yearB) && monthA < monthB)
		Afirst = true;
	else if ((yearA == yearB) && (monthA == monthB) && (dayA < dayB))
		Afirst = true;
	
	printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
		Afirst ? monthA : monthB,
		Afirst ? dayA : dayB,
		Afirst ? yearA : yearB,
		Afirst ? monthB : monthA,
		Afirst ? dayB : dayA,
		Afirst ? yearB : yearA);

	return 0;
}
