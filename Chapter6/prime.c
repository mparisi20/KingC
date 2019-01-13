#include <stdio.h>

int main(void)
{
	int n, d;
	printf("Enter a whole number: ");
	scanf("%d", &n);
	for (d = 2; d < n; d++)
		if (n % d == 0)
			break;
	if (d < n)
		printf("%d is divisible by %d\n", n, d);
	else
		printf("%d is prime\n", n);

/* Chapter 6 Exercises
1. 
"1 2 4 8 16 32 64 128 "
2.
"9384 938 93 9 "
3.
"5 4 3 2 "
*/
int i, j;
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
	printf("%d ", i);
/*
4.
c) is not equivalent to a) and b) because if there is some check on
i, like "if (i == 1) break;" then c will break, but a and b will not
5.
c) is not equivalent to a) and b) because c) checks the condition
after executing the loop body, while a) and b) check it before.
6.
*/
for (i = 1; i <= 128; i *= 2)
	printf("%d ", i);
/*
7.
*/
for (i = 9384; i > 0; i /= 10)
	printf("%d ", i);
/*
8.
"10 5 3 2 1 1 1 1 1 1 1" infinitely!
*/
/* for (i = 10; i >= 1; i /= 2)
	printf("%d ", i++); */
/* 9. */
/* i = 10;
while (i >= 1) {
	printf("%d ", i++);
	i /= 2;
} */
/* 10.
for (i = 0; i < 10; i++) {
	if (i % 2 == 0)
		continue;
	printf("%d ", i);
}
could convert to...
for (i = 0; i < 10 i++) {
	if (i % 2 == 0)
		goto skip;
	printf("%d ", i);
	skip:
		;
}
11. 
"20\n"
12.
*/
for (d = 2; d*d <= n; d++)  
	if (n % d == 0)
		break;
/*
 if a number has a divisor above its square root, 
 it also has a complementary one below it. Therefore, we only
 need to check the numbers below the square root 
 to determine if a number is prime.
 
14.
for (n = 0; m > 0; m /= 2, n++)
	;
// expr3 of a for loop expression is only used for side effects,
// so we just make it a compound expression to add another side effect
15. The error is that there is a semicolon right after the if condition. The
// compiler will think this is a null statement and end the if statement, causing
the print to always occur.
if (n % 2 == 0)
	printf("n is even\n");
*/

	return 0;
}

