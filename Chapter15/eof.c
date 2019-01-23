#include <stdio.h>

int main(void)
{
	/* test if getchar() will continue to return EOF after reaching end-of-file */
	/* eof < input.txt */
	int ch, i;
	while ((ch = getchar()) != EOF)
		;
	for (i = 0; i < 10; i++) {
		printf("ch = %d\n", ch);
		ch = getchar();
	}
	return 0;
	/* conclusion: getchar() will return EOF again if you call it again
	after reaching end-of-file on the input stream */
}
