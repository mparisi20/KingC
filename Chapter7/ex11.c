#include <stdio.h>

// Exercise 7.11 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	char first_initial, ch;
	printf("Enter a first and last name: ");
	while ((ch = getchar()) == ' ' || ch == '\t' || ch == '\n')
		; // skip leading whitespace
	first_initial = ch;
	while (getchar() != ' ')
		; // consume rest of first name
	while ((ch = getchar()) == ' ' || ch == '\t' || ch == '\n')
		; // consume any extra whitespace between first and last name
	putchar(ch); // write first letter of the last name
	while ((ch = getchar()) != '\n' && ch != '\t' && ch != ' ')
		putchar(ch);
	printf(", %c.\n", first_initial);
	return 0;
}
