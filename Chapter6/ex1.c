#include <stdio.h>

// Exercise 6.1 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	float max = 0.0, n;
	for(;;) {
		printf("Enter a number: ");
		scanf("%f", &n);
		if (n <= 0)
			break;
		if (n > max)
			max = n;
	}
	printf("The largest number entered was %.2f\n", max);
	return 0;
}
