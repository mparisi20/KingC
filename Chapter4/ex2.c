#include <stdio.h>

// Exercise 4.2 from King
// By Max Parisi
// finished 1/9/2019

int main(void)
{
	int n, digitH, digitM, digitL;
	printf("Enter a three-digit number: ");
	scanf("%d", &n);
	digitL = n % 10;
	n /= 10;
	digitM = n % 10;
	n /= 10;
	digitH = n;
	printf("The reversal is: %d%d%d\n", digitL, digitM, digitH);
	return 0;
}
