#include <stdio.h>

int main(void)
{
	float x = 73.99f;
	int a = 5;
	a = x; // implicit casting... No warning given at all, even with -Wall and -W
	printf("a == %d\n", a);
	
	int i;
	float f;
	f = i = 33.3f; // assigns 33 to i, 33.0 to f (right-associativity of =)
	printf("i=%d\tf=%f\n", i, f);
	
	i = 0;
	// i = i++; undefined behavior
	// j = ++i + 1; undefined behavior
	// a[i++] = a[i++] + 2; undefined behavior
	// **C Standard doesn't specify exactly when i needs to be incremented; it just needs to happen before the next statement begins**
	
	int j = ++i; // don't mix ++i with i in the same expr. It's undefined exactly when the new value is placed into i
	printf("%d\n", j);
	printf("%d %d %d %d\n", 8%5, -8%5, 8%-5, -8%-5);
/* Exercises:
1. a) 1 2
   b) 0
   c) 1
   d) 0
2. I think they will always be the same because division always rounds
towards 0, so changing the sign of the dividend does not affect the absolute
value of the quotient. Therefore, in both cases, we are just changing the 
sign of the quotient as a whole, making the two expressions equivalent.
[from solution] My answer was correct for C99. However, C89 allows the 
implementation to decide whether to always round towards 0 or round away
for negatives, making i = 9 and j = 7 a counterexample for some machines.
3. C89 int division
   a) 8 / 5 is always 1
   b) -8 / 5 could be -1 or -2
   c) 8 / -5 could be -1 or -2
   d) -8 / -5 is always 1
4. C99 int division
   a) 8 / 5 is always 1
   b) -8 / 5 is always -1
   c) 8 / -5 is always -1
   d) -8 / -5 is always 1
5. C89 %
   a) 8 % 5 is 3
   b) -8 % 5 could be 2 or -3
   c) 8 % -5 could be 3 or -2
   d) -8 % -5 could be 2 or -3
6. C99 %
   a) 8 % 5 is 3
   b) -8 % 5 is -3
   c) 8 % -5 is 3
   d) -8 % -5 is -3
7. This method won't work when the preadjusted total
ends in a 0. This is because (x-1) % 10 wraps around to 9 
when x ends in a 0, whereas x%10 will always be 0 when x ends in a 0.
This causes the result of the first to be 0 and that of the second to be 10
8. That alternative expression will work because when total ends in 0, the result will
now come out to 0. The problem of exercise 7 is solved, and no other case
is changed.
9. 
a) 63 8
b) 3 2 1
c) 2 -1 3
d) 0 0 0
10.
a) 12 12
b) 3 4
c) 2 8   // Remember int division remove the decimal!
d) 6 9
11. 
a) 0 2
b) 4 11 6
c) 0 8 7
d) 3 4 5 4
12.
a) 6 16
b) 6 -7
c) 6 23
d) 6 15
13. The value of the expression (i += i) is the new value
stored on the right, which is i+1. Similarly, the value of the prefix expression,
++i is i+1 whereas the evaluation of i++ is just i. All three of these functions
have the same side effect, but only ++i is truly equivalent to i += 1 due to
the identical evaluations.
14.
a) ((a * b) - (c * d)) + e
b) ((a / b) % c) / d
c) (((-a) - b) + c) - (+d)
d) ((a * (-b)) / c) - d
15. i = 1, j = 2 
a) i += j; // i is 3, j is 2
b) i--; // i is 0
c) i * j / i; // no change. i is 1 and j is 2
d) i % ++j; // no change to i. i is 1 and j is 3
   */
   i = 1;
   int k = 5;
   printf("%d ", i++ - 1);
   printf("%d", i);

	return 0;
}