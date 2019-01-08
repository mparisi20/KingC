#include <stdio.h>

// Exercise 2.6 from King
// By Max Parisi
// finished 1/7/2019

int main(void)
{
	float x, fx;
	
	printf("Evaluate f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Enter a value for x: ");
	scanf("%f", &x); // assume numeric input
	
	fx = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6; // using Horner's rule
	printf("f(%.2f) = %.5f\n", x, fx);
	
	return 0;
}
