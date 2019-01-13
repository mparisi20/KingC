#include <stdio.h>

// Exercise 6.3 from King
// By Max Parisi
// finished 1/11/2019

int main(void)
{
	int num, denom, m, n, temp;
	printf("Enter a fraction: ");
	scanf("%d /%d", &num, &denom);
	m = num;
	n = denom;
	while (n != 0) {
		temp = m % n;
		m = n;
		n = temp;
	} 
	num /= m;
	denom /= m;
	printf("In lowest terms: %d/%d\n", num, denom);
	return 0;
}
