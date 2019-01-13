#include <stdio.h>

// Exercise 6.12 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	float e, error;
	int i, j, i_fact;
	printf("This program approximates e as 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!\n\n");
	printf("Enter the desired error (usually a small floating-point number): ");
	scanf("%f", &error);
	
	e = 1.0f;
	i = 1;
	for (;;) {
		i_fact = 1;
		for (j = i; j > 1; j--) {
			i_fact *= j;
		}
		if (1.0 / i_fact < error)
			break;
		e += (1.0 / i_fact);
		i++;
	}
	printf("e = %f\n", e);
	return 0;
}
