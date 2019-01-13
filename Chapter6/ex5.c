#include <stdio.h>

// Exercise 6.5 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	int n;
	printf("Enter a whole number: ");
	scanf("%d", &n);
	printf("The reversal is: ");
	do {
		printf("%d", n % 10);
		n /= 10;
	} while (n > 0);
	
	printf("\n");
	return 0;
}
