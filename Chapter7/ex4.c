#include <stdio.h>
#include <ctype.h>

// Exercise 7.4 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	int ch;
	printf("Enter phone number: ");
	while ((ch = toupper(getchar())) != '\n') {
		if (ch >= 'A' && ch <= 'C')
			putchar('2');
		else if (ch >= 'D' && ch <= 'F')
			putchar('3');
		else if (ch >= 'G' && ch <= 'I')
			putchar('4');
		else if (ch >= 'J' && ch <= 'L')
			putchar('5');
		else if (ch >= 'M' && ch <= 'O')
			putchar('6');
		else if (ch >= 'P' && ch <= 'S')
			putchar('7');
		else if (ch >= 'T' && ch <= 'V')
			putchar('8');
		else if (ch >= 'W' && ch <= 'Z')
			putchar('9');
		else putchar(ch);
	}	
	return 0;
}
