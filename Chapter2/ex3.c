#include <stdio.h>

// Exercise 2.3 from King
// By Max Parisi
// finished 1/7/2019

#define PI 3.14159265

int main(void)
{
	float r, volume;
	printf("Sphere volume calculator\n\nEnter sphere radius: ");
	scanf("%f", &r); // breaks if non-numeric input entered... will learn why later

	volume = (4.0f / 3.0f) * PI * r * r * r;
	printf("The volume of a sphere with radius %.2f meters is %.2f cubic meters.\n",
		r, volume);
	
	return 0;
}
