#include <stdio.h>

// Exercise 2.4 from King
// By Max Parisi
// finished 1/7/2019

int main(void)
{
	float amt;

	printf("Enter an amount: ");
	scanf("%f", &amt); // fails with non numeric data
	printf("With tax added: $%.2f\n", amt * 1.05f);
	
	return 0;
}
