#include <stdio.h>

// Exercise 7.3 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	double n, sum = 0.0;

	printf("This program sums a series of floating point numbers.\n");
	printf("Enter numbers (0 to terminate): ");

	scanf("%lf", &n);
	while (n != 0.0) {
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %f\n", sum);

	return 0;
}
