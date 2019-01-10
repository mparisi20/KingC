#include <stdio.h>

// Exercise 5.3 from King
// By Max Parisi
// finished 1/10/2019

int main(void)
{
	int shares;
	float share_price, commissionA, commissionB, value;
	
	printf("Enter the number of shares, followed the price per share: ");
	scanf("%d%f", &shares, &share_price);
	value = shares * share_price;
	
	if (value < 2500.00f)
		commissionA = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commissionA = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commissionA = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commissionA = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commissionA = 155.00f + .0011f * value;
	else
		commissionA = 255.00f + .0009f * value;

	if (commissionA < 39.00f)
		commissionA = 39.00f;
	
	commissionB = 33.0f;
	if (shares < 2000)
		commissionB += 0.03 * shares;
	else
		commissionB += 0.02 * shares;

	printf("Commission of original broker: $%.2f\n", commissionA);
	printf("Commission of rival broker: $%.2f\n", commissionB);
	
	return 0;
}
