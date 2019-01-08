#include <stdio.h>

// Exercise 2.2 from King
// By Max Parisi
// finished 1/7/2019

#define RADIUS 10
#define PI 3.14159265

int main(void)
{
	float r = RADIUS, volume;
	volume = (4.0f / 3.0f) * PI * r * r * r;
	printf("The volume of a sphere with radius %.2f meters is %.2f cubic meters.\n",
		r, volume);
	
	return 0;
}
