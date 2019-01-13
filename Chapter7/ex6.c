#include <stdio.h>

// Exercise 7.6 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	printf("sizeof(int) == %zu\nsizeof(short) == %zu\nsizeof(long) == %zu\n", 
		sizeof(int), sizeof(short), sizeof(long));
	printf("sizeof(float) == %zu\nsizeof(double) == %zu\nsizeof(long double) == %zu\n",
		sizeof(float), sizeof(double), sizeof(long double));
	return 0;
}
