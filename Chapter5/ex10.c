#include <stdio.h>

// Exercise 5.10 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	int grade = -1; // initialize grade to -1 as input validation to scanf
	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	if (grade < 0 || grade > 100) {
		printf("Invalid grade.\n");
		return 1;
	}
	printf("Letter grade: ");
	switch (grade / 10) {
		case 10: case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("F");
			break;
	}
	printf("\n");

	return 0;
}
