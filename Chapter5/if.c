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
i = 12; j = 11;
printf("%d\n", (i > j) - (i < j));
/*
5.
Yes; the if statement is a valid logical expression.
when n is equal to 0, it prints "n is between 1 and 10\n", so the 
behavior is different from what one might expect.
6.
The if statement is legal, and it won't print anything when n equals 5.
7.
In both cases, 17 will be printed
8.
teenager = (age >= 13 && age <= 19);
9.
They are equivalent. In both code fragments, a score of A maps to 90-100,
B to 80-89, C to 70-79, D to 60-69, F to 0-59.
10.
output: "onetwo"
11.
*/
	int area_code = 678;
	switch(area_code) {
		case 229:
			printf("Albany\n");
			break;
		case 404: case 470: case 678: case 770:
			printf("Atlanta\n");
			break;
		case 478:
			printf("Macon\n");
			break;
		case 706: case 762:
			printf("Columbus\n");
			break;
		case 912:
			printf("Savannah\n");
			break;
		default:
			printf("Area code not recognized\n");
	}


	return 0;
}





