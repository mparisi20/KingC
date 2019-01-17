#include <stdio.h>
extern int printf(const char *, ...);
extern int getchar(void);
extern double fmax(double, double);
extern double sqrt(double); /* declare an external function using a C standard library identifier */
extern int funct(int); /* declare an external function with no definition anywhere */

#undef sqrt /* defensive undef in case the library provides its own sqrt macro */
#define sqrt(x) ((x)>=0?sqrt(x):0) /* our own sqrt(x) macro that evaluates to 0 for negative input */

int main(void)
{
	printf("%f\n", sqrt(-2)); /* this will invoke our sqrt macro */
	printf("%f\n", (sqrt)(-2)); /* this will use the standard library sqrt function */
	int ch = getchar(); /* this could be a macro invocation */
	printf("%c\n", ch);
	ch = (getchar)(); /* guaranteed to be an actual function call, not a macro invocation */
	printf("%c\n", ch);
	/* funct(5); compiles, but then the linker can't find the definition! */

	// ch = (ch = getchar()) + ch; // UB... no sequence point between the assignment and usage of ch
	printf("%d\n", ch);


/*
Exercises:
1.
a) #define cube(x) ((x)*(x)*(x))
b) #define rem4(n) ((n)%4)
c) #define prod_lt100(x, y) ((x)*(y)<100?1:0)

2.
#define NELEMS(a) ((int) (sizeof(a)/sizeof(a[0])))

3. #define DOUBLE(x) 2*x
a) DOUBLE(1+2) is 2*1+2 is 4
b) 4/DOUBLE(2) is 4/2*2 is 4
c) it should be #define DOUBLE(x) (2*(x))

10/avg(2,2) is 10/(2+2)/2 is 2/2 is 1
4.
a) a problem with #define AVG(x,y) (x+y)/2 is that 2*AVG(5, 10)
evaluates to 2*(5+10)/2 to 15 instead of 14. It should be
#define AVG(x,y) (((x)+(y))/2)
b) a problem with #define AREA(x,y) (x)*(y) is that 2/AREA(2,3)
evaluates to 2/(2)*(3) to 3 instead of 0. It should be
#define AREA(x,y) ((x)*(y))

5. 
a) putchar(TOUPPER(s[++i])) is 
putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i)]));
output: D

b) output: 2

**These calls to putchar do not cause undefined behavior bc the &&
and ?: operators impose sequence points. Therefore, we *know* 
that i has been incremented by the time the next 
operand to the && or the ?: is evaluated, so its value is defined.**

6.
*/
#define DISP(f,x) printf(#f "(%g) = %g\n", (x), f(x)) 
	DISP(sqrt, 3.0);
	DISP(sqrt, 2.0);
#define DISP2(f,x,y) printf(#f "(%g, %g) = %g\n", (x), (y), f((x),(y)))
	DISP2(fmax, 10.5, 11.6);
/*	
7.
a) GENERIC_MAX(long) is long long_max(long x, long y) { return x > y ? x : y; }
b) unsigned long has a space in it, so the ## operator will put a
space in the replacement list, breaking up the function name
c) ??
*/
typedef unsigned long ulong; // ulong will work with GENERIC_MAX
/* 8.
*/
#define STR(x) #x
#define STR2(x) STR(x) /* necessary so that __LINE__ and __FILE__ are evaluated before getting stringized */
#define LINE_FILE "Line " STR2(__LINE__) " of file " STR2(__FILE__)
const char *str = LINE_FILE;
printf("%s\n", str);
printf("%s\n", LINE_FILE);

/*
9.
*/
#define CHECK(x,y,n) ((x)>=0&&(x)<=(n)-1&&(y)>=0&&(y)<=(n)-1?1:0)

#define MEDIAN(x,y,z) ((y)>=(x)&&(y)<=(z)||(y)>=(z)&&(y)<=(x)?(y): \
						(x)>=(y)&&(x)<=(z)||(x)>=(z)&&(x)<=(y)?(x): \
						 (z))
						 
#define POLYNOMIAL(x) (3*(x)*(x)*(x)*(x)*(x) + 2*(x)*(x)*(x)*(x) \
						- 5*(x)*(x)*(x) - (x)*(x) + 7*(x) - 6)

printf("%d\n", CHECK(4,-1,10));
printf("%d\n", MEDIAN(1,7,81));
printf("%f\n", POLYNOMIAL(5.0));
/*
10.
A function evaluates its arguments only once, while a macro may
evaluate its arguments any number of times. This creates problems
for arguments with side effects, as in MAX(i++,j);
11.
*/
#define ERROR(fmt,...) fprintf(stderr,fmt,__VA_ARGS__)
	ERROR("Range error: index = %d and %d\n", 5, 4);
/*
12.
c) and e) will fail, because M is defined
13.
b) output: N is undefined
16.
IDENT(foo) is PRAGMA(ident "foo") is _Pragma("ident \"foo\"")
is #pragma ident "foo"


*/	
	
	return 0;
}

