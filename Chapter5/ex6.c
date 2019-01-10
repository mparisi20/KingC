#include <stdio.h>

// Exercise 5.6 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total, actual_check, user_check;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	actual_check = 9 - ((total - 1) % 10);
	
	printf("Enter check digit: ");
	scanf("%1d", &user_check);
	
	if (user_check == actual_check)
		printf("VALID\n");
	else
		printf("INVALID\n");
  return 0;
}
