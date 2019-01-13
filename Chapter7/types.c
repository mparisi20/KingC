#include <stdio.h>
#include <stdint.h>

int main(void)
{
	long l = -15;
	unsigned u = 10;
	printf("%d\n", u > l);
	printf("%lu\n", SIZE_MAX);
	printf("%zu\n", (unsigned long) sizeof(size_t));
	printf("%d\n", sizeof(l) < SIZE_MAX);
	int test = 0b1000001; // This is a non-standard GCC extension!!
	// also, putting a declaration here is c99 and later only!
	printf("%d\n", test);
	
/* Exercises:
1.
a) 077 = 63
b) 0x77 = 119
c) 0XABC = 2748
2.
a) 010E2 is a legal floating-point constant
b) 32.1E+5 is a legal floating-point constant
c) 0790 is a legal integer constant
d) 100_000 is not a legal constant
e) 3.978e-2 is a legal floating-point constant
3.
b) short float is not a legal type
4.
d) printf(c) is not legal because it expects the format string
5.
b) 0b1000001 is not a legal way to write the number 65 in Standard-compliant C, but it is a GCC extension
6. char must be at least 8bits, short at least 16, int at least 16, long at least 32, and long long at least 64
a) days in a month would fit in char
b) days in a year would fit in short
c) minutes in a day would fit in short
d) seconds in a day would fit in long guaranteed (int could be 16 bits)
7.
a) \010
b) \012
c) \015
d) \011
8.
a) \x8
b) \xA
c) \xD
d) \x9
9. int i, j;
i / j + 'a' is type int. The 'a' character constant is an int, so no promotion is necessary
10. int i; long j; unsigned k;
The expression i + (int) j * k has type unsigned int
11. i int, f float, d double
i * f / d has type double
12. int i; float f;
First, i is promoted to float, and the expression i + f has type float. Next, the expression
is promoted to double and stored in d.
13.
a) type int, value -2 
b) type long, value 7
c) type float, value 6.5
d) type double, value 3.75
e) type double, value -1
f) type int, value 6
14.
"frac_part = f - (int) f" will not work correctly if f is outside 
the range of int. When this happens, the cast cannot possibly yield
the integer part of f.

15.
*/
typedef char Int8;
typedef short Int16;
typedef int Int32;
// based on my machine, these types represent 8-, 16-, and 32-bit integers

char ch = 5;
short s = 200;
printf("sizeof char = %zu, sizeof short = %zu, sizeof(ch + s) = %zu\n", sizeof(ch), sizeof(s), sizeof(ch + s)); // both are promoted to int... sizeof the expr of 4	

return 0;


}
	