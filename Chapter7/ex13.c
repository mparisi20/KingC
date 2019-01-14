#include <stdio.h>
#include <stdbool.h>

#define IN 1
#define OUT 0

// Exercise 7.13 from King
// By Max Parisi
// finished 1/13/2019

int main(void)
{
	int state = OUT; // in or out of a word
	int ch, length, length_sum = 0, numwords = 0;
	bool isWhitespace;
	
	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n') { // get next character until end-of-line reached
		isWhitespace = (ch == ' ' || ch == '\t');
		if (state == OUT) {
			if (!isWhitespace) {
				state = IN;
				length = 1;
				numwords++;
			}
		}
		else if (state == IN) {
			if (isWhitespace) {
				state = OUT;
				length_sum += length;
			}
			else
				length++;
		}
	}
	if (state == IN) { // reached end of line while in a word
		length_sum += length;
		state == OUT;
	}
	// printf("%d %d\n", length_sum, numwords); // debug line
	printf("Average word length: %.1f\n", (float) length_sum / numwords);
	return 0;
}
