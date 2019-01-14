#include <stdio.h>
#include <math.h>

// Exercise 7.14 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	double x, y = 1, avg;
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	if (x < 0) {
		printf("Error: input must be positive.\n");
		return -1;
	}
	avg = (x / y + y) / 2;
	while (fabs(avg - y) >= 0.00001*y) {
		y = avg;
		avg = (x / y + y) / 2;
	}
	printf("Square root: %.5f\n", y);
	return 0;
}
