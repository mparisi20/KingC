#include <stdio.h>
#include <ctype.h>

// Exercise 7.10 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	int ch, vowels = 0;
	printf("Enter a sentence: ");
	while ((ch = toupper(getchar())) != '\n') {
		if (ch == 'A' || ch == 'E' || ch == 'I' ||
			ch == 'O' || ch == 'U')
			vowels++;
	}
	printf("Your sentence contains %d vowels.\n", vowels);
	return 0;
}
