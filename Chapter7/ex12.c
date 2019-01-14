#include <stdio.h>

// Exercise 7.12 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	float op1, op2, result;
	char operator, next_operator;
	printf("Enter an expression: ");
	scanf("%f", &op1);
	result = op1;
	while ((operator = getchar()) == ' ')
		; // get next non-whitespace char into operator
	while (operator != '\n') { // newline indicates end of expression. Termination depends on newline occurring directly after the last operand
		scanf("%f", &op2);
		if (operator == '+')
			result += op2;
		else if (operator == '-')
			result -= op2;
		else if (operator == '*')
			result *= op2;
		else if (operator == '/')
			result /= op2;
		else {
			printf("Invalid operator found in expression. Valid operators are +,-,*,/\n");
			return -1;
		}
		while ((operator = getchar()) == ' ')
			;
	}
	printf("Value of expression: %f\n", result);
	return 0;
}
