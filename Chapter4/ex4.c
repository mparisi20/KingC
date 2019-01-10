#include <stdio.h>

// Exercise 4.4 from King
// By Max Parisi
// finished 1/9/2019

int main(void)
{
	int n;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &n);
	printf("In octal, your number is: %d%d%d%d%d\n",
		(n / 4096) % 8, (n / 512) % 8, (n / 64) % 8, (n / 8) % 8, n % 8);
	
	
	return 0;
}
