#include <stdio.h>
int main(void)
{
	printf("%d %d %d %d\n", 8%5, -8%5, 8%-5, -8%-5); // implementation defined behavior
	return 0;
}
