#include <stdio.h>

// Exercise 3.2 from King
// By Max Parisi
// finished 1/8/2019

int main(void)
{
	int item_num, month, day, year;
	float price;
	printf("Enter item number: ");
	scanf("%d", &item_num);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d /%d /%d", &month, &day, &year);
	
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%.2d/%.2d/%d\n", item_num, price, month, day, year);
	
	return 0;
}
