#include <stdio.h>

// Exercise 7.2 from King
// By Max Parisi
// finished 1/12/2019

int main(void)
{
	short i; 
	int n, j;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar(); // consume newline
    for (i = 1, j = 1; i <= n; j++, i++) {
		if (j > 24) {
			printf("Press Enter to continue...\n");
			while (getchar() != '\n')
				;
			j = 1;
		}
		printf("%10hd%10hd\n", i, i * i);
	}
	return 0;
}
