#include <stdio.h>

// Exercise 6.2 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	int a, b, temp;
	printf("Enter two integers: ");
	scanf("%d%d", &a, &b);
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	printf("Greatest common divisor: %d\n", a);
	return 0;
}
