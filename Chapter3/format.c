#include <stdio.h>

int main(void)
{
	printf("%10.5g\n", 52000000.0f); 
	// maximum number of sig figs to print is 5... for 1 sig fig numbers, no fractional part is printed at all
	// minimum characters to print is 10... if representation takes up fewer than 10 characters, pad with spaces
	
	printf("%.7g\n", 1234.6119f); // Only 7 sig figs may be printed, so it rounds up to 1234.612
	// %g tends to choose the representation that takes up less space, but it will choose
	// 1.23e+003 over simply 1230 even though both representations have 3 sig figs and the latter is shorter
	printf("%.3g\n", 1234.0f);
	printf("%-10g\n", 8392100.0f); // %g seems to print 5 sig figs by default
	
	printf("\nEx1 check\n");
	printf("%6d,%4d\n", 86, 1040); // ''''86,1040 (correct)
	printf("%12.5e\n", 30.253);	   // 3.02530e+001 (correct)
	printf("%.4f\n", 83.162);		   // 83.1620 (correct)
	printf("%-6.2g\n", .0000009979); // 1.0e-006  (was actually just 1e-006)

	printf("\nEx2 check\n");
	float x = 25.46;
	printf("%-8.1e\n", x);
	printf("%10.6e\n", x);
	printf("%-8.3f\n", x);
	printf("%6.0f\n", x);
	
}


/* Exercise 3: differentiate between scanf format strings
a) "%d" is exactly the same as " %d". Both will consume leading whitespace then match an integer
b) "%d-%d-%d" is different from "%d -%d -%d"
  The first will fail with input "10 - 10 - 10", but the second will match
c) "%f" is not the same as "%f ". 
  The second will consume the everything up to 2 in "12.3    2" while the 
  first will only consume the 12.3 and leave the whitespace on standard
  input
d) "%f,%f" is the same as "%f, %f". Both will skip leading whitespace, 
match a float followed immediately by a comma, then match an arbitrary 
amount of whitespace, then match another float.

*/

/* Exercise 4: 
scanf("%d%f%d", &i, &x, &j);
input: "10.3 5 6"
results:
i = 10
x = 0.3f
j = 5
(The 6 is still in the input buffer)

Exercise 5:
scanf("%f%d%f", &x, &i, &y);
input: "12.3 45.6 789"
results:
x = 12.3
i = 45
y = 0.6f
(" 789" is still in the input buffer)

Exercise 6:
To allow spaces before and after the "/"s, change the scanf format string to
"%d /%d"

*/
