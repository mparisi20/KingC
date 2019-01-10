#include <stdio.h>

// Exercise 5.11 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	int n = -1;
	printf("Enter a two-digit number: ");
	scanf("%d", &n);
	if (n < 0 || n > 99) {
		printf("Input must be two digits\n");
		return 1;
	}
	
	printf("You entered the number ");
	if (n >= 10 && n <= 19) {
		switch (n % 10) {
			case 9: printf("nineteen"); 
					break;
			case 8:	printf("eighteen");
					break;
			case 7: printf("seventeen");
					break;
			case 6: printf("sixteen");
					break;
			case 5: printf("fifteen");
					break;
			case 4: printf("fourteen");
					break;
			case 3: printf("thirteen");
					break;
			case 2: printf("twelve");
					break;
			case 1: printf("eleven");
					break;
			case 0: printf("ten");
					break;
			}
	}
	else {
		switch (n / 10) {
			case 9: printf("ninety");
				break;
			case 8: printf("eighty");
				break;
			case 7: printf("seventy");
				break;
			case 6: printf("sixty");
				break;
			case 5: printf("fifty");
				break;
			case 4: printf("forty");
				break;
			case 3: printf("thirty");
				break;
			case 2: printf("twenty");
				break;
			default:
				break;
		}
		if ((n / 10) != 0 && (n % 10) != 0) printf("-");
		switch (n % 10) {
			case 9: printf("nine");
				break;
			case 8: printf("eight");
				break;
			case 7: printf("seven");
				break;
			case 6: printf("six");
				break;
			case 5: printf("five");
				break;
			case 4: printf("four");
				break;
			case 3: printf("three");
				break;
			case 2: printf("two");
				break;
			case 1: printf("one");
				break;
			case 0: if (n == 0) printf("zero");
				break;
		}
	}
	printf(".\n");
	return 0;
}
