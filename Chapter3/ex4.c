#include <stdio.h>

// Exercise 3.4 from King
// By Max Parisi
// finished 1/8/2019

int main(void)
{
	int part1, part2, part3;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf(" (%d)%d-%d", &part1, &part2, &part3);
	printf("You entered %.3d.%.3d.%.4d\n", part1, part2, part3);
	
	return 0;
}
