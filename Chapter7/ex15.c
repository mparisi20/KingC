#include <stdio.h>
#include <math.h>

// Exercise 7.15 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	long double n, result;
	int i;
	printf("Enter a positive integer: ");
	scanf("%Lf", &n);
	if (n < 0) {
		printf("Error: input must be positive\n");
		return -1;
	}
	if (n == 0) {
		printf("Factorial of 0: 1\n");
		return 0;
	}
	result = n;
	for (i = n; i > 2; i--)
		result *= i-1;
	printf("Factorial of %Lf: %Lf\n", n, result);
	return 0;
}
/************
Maximum n for correct input given type of result
a) short: 7
b) int: 12
c) long: 12
d) long long: 20
e) float: 34
f) double: 170 (Google calculator won't even give me 171!, so it probably also uses double precision)
g) long double: doesn't work (MinGW doesn't support it)

*************/