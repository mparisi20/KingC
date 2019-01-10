#include <stdio.h>

// Exercise 5.1 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	if (n < 0)
		; // do nothing
	else if (n <= 9)
		printf("The number %d has 1 digit.\n", n);
	else if (n <= 99)
		printf("The number %d has 2 digits.\n", n);
	else if (n <= 999)
		printf("The number %d has 3 digits.\n", n);
	else if (n <= 9999)
		printf("The number %d has 4 digits.\n", n);
	// no action taken if n is negative or greater than 9999
	
	return 0;
}
