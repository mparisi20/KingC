#include <stdio.h>

// Exercise 7.7 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char op;
	printf("Enter two fractions separated by a +, -, *, or /: ");
	scanf("%d /%d %c%d /%d", &num1, &denom1, &op, &num2, &denom2);
	
	// printf("%c %d %d\n", op, op, op=='/');
	if (denom1 == 0 || denom2 == 0) {
		printf("Error: denominators cannot be zero.\n");
		return -1;
	}
	if (op == '+') {
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
	}
	else if (op == '-') {
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;		
	}
	else if (op == '*') {
		result_num = num1 * num2;
		result_denom = denom1 * denom2;		
	}
	else if (op == '/') {
		if (num1 == 0) {
			printf("Error: you cannot divide by 0.\n");
			return -1;
		}
		result_num = num1 * denom2;
		result_denom = denom1 * num2;		
	}
	else {
		printf("Error: invalid operator. It must be either +, -, *, or /\n");
		return -1;
	}
	printf("Result: %d/%d\n", result_num, result_denom);

	return 0;
}
