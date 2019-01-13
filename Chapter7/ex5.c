#include <stdio.h>
#include <ctype.h>

// Exercise 7.5 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	int ch, points = 0;
	printf("Enter a word: ");
	while ((ch = toupper(getchar())) != '\n') {
		switch (ch) {
			case 'D': case 'G':
				points += 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				points += 3;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				points += 4;
				break;
			case 'K':
				points += 5;
				break;
			case 'J': case 'X':
				points += 8;
				break;
			case 'Q': case 'Z':
				points += 10;
				break;
			default:
				points += 1;
				break;
		}
	}
	printf("Scrabble value: %d", points);
	
	return 0;
}
