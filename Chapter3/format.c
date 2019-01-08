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
}
