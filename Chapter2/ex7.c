#include <stdio.h>

// Exercise 2.7 from King
// By Max Parisi
// finished 1/7/2019

int main(void)
{
	int total, ones, fives, tens, twenties;
	printf("Enter a dollar amount: ");
	scanf("%d", &total); // expects integer input
	
	twenties = total / 20;
	total = total - 20*twenties;
	
	tens = total / 10;
	total = total - 10*tens;
	
	fives = total / 5;
	total = total - 5*fives;
	
	ones = total;
	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties, tens, fives, ones);
	
	return 0;
}
