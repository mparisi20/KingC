#include <stdio.h>

// Exercise 6.11 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	float e;
	int i, j, n, i_fact;
	printf("This program approximates e as 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!\n\n");
	printf("Enter a whole number for n: ");
	scanf("%d", &n);
	
	e = 1.0f;
	for (i = 1; i <= n; i++) {
		i_fact = 1;
		for (j = i; j > 1; j--) {
			i_fact *= j;
		}
		e += (1.0 / i_fact);
	}
	printf("e = %f\n", e);
	return 0;
}
