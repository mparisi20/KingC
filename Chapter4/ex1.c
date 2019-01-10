#include <stdio.h>

// Exercise 4.1 from King
// By Max Parisi
// finished 1/9/2019

int main(void)
{
	int n, digitH, digitL;
	printf("Enter a two-digit number: ");
	scanf("%d", &n);
	digitH = n / 10;
	digitL = n % 10;
	printf("The reversal is: %d%d\n", digitL, digitH);
	return 0;
}
