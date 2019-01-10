#include <stdio.h>

// Exercise 5.4 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	int speed;
	printf("Enter wind speed (knots): ");
	scanf("%d", &speed);
	if (speed < 1)
		printf("Calm\n");
	else if (speed <= 3)
		printf("Light air\n");
	else if (speed <= 27)
		printf("Breeze\n");
	else if (speed <= 47)
		printf("Gale\n");
	else if (speed <= 63)
		printf("Storm\n");
	else
		printf("Hurricane\n");
	return 0;
}
