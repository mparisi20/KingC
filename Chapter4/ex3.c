#include <stdio.h>

// Exercise 4.3 from King
// By Max Parisi
// finished 1/9/2019

int main(void)
{
	int n, digitH, digitM, digitL;
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &digitH, &digitM, &digitL);
	printf("The reversal is: %d%d%d\n", digitL, digitM, digitH);
	return 0;
}
