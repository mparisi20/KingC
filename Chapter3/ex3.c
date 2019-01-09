#include <stdio.h>

// Exercise 3.3 from King
// By Max Parisi
// finished 1/8/2019

int main(void)
{
	int GS1, group, publisher, item, check;
	printf("Enter ISBN: ");
	scanf("%d -%d -%d -%d -%d", &GS1, &group, &publisher, &item, &check);
	printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\n",
		GS1, group, publisher);
	printf("Item number: %d\nCheck digit: %d\n", item, check);
	
	return 0;
}
