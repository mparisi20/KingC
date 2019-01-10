#include <stdio.h>

int main(void)
{
	int n = 5;
	/* This is actually 5 statements: The entire if-else block,
		The first printf, the nested if-else block as a whole, and the
			two other printfs. */
	/* No braces are necessary since this follows the syntax of
	   "if (condition) statement else statement" */
	if (n < 0)
		printf("n is less than 0\n");
	else if (n == 0)
		printf("n is equal to 0\n");
	else
		printf("n is greater than 0\n");
	
	int i = 7, j = 8, k = 9;
	printf("result: %d ", (i = j) || (j = k));
	printf("%d %d %d\n", i, j, k);
	
	return 0;
}

/*
Exercises:
1.
a) 1 
b) 1
c) 1
d) 0   ... ((i % j) + i) < k, so 6 is not less than 5
2.
a) 1
b) 1
c) 1
d) 1
3.
a) 1 3 4 5
b) 0 7 8 9
c) 1 8 8 9
d) 1 2 1 1
4.
*/
printf("%d\n"




*/




