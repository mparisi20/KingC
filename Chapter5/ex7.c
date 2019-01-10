#include <stdio.h>

// Exercise 5.7 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	int n1, n2, n3, n4, max, min, max12, max34, min12, min34;
	printf("Enter four integers: ");
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
	
	/* 4 if statement solution */
	/* figure out max and min of first two numbers and last two numbers,
	 * then compare those to get the overall max and min. */
	max12 = n1;
	min12 = n2;
	max34 = n3;
	min34 = n4;
	
	if (n2 > n1) {
		max12 = n2;
		min12 = n1;
	}
	
	if (n4 > n3) {
		max34 = n4;
		min34 = n3;
	}
	
	if (max12 > max34)
		max = max12;
	else
		max = max34;
	
	if (min12 < min34)
		min = min12;
	else
		min = min34;
	
	/* nicer solution with 6 if statements
	max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	if (n4 > max)
		max = n4;
	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;
	if (n4 < min)
		min = n4;
	*/
	
	printf("Largest: %d\n", max);
	printf("Smallest: %d\n", min);
	
	return 0;
}
