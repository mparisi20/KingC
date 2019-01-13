#include <stdio.h>

// Exercise 6.6 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	int n, i;
	printf("Enter a whole number: ");
	scanf("%d", &n);
	for (i = 2; i*i <= n; i+=2) // printf even squares between 1 and n, inclusive
		printf("%d\n", i*i);
	return 0;
}
