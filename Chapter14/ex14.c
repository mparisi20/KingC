







int main(void)
{
	int a[= 10], i, j, k, m; // compilation error
	
	i = j;
	
	
	
	i = 10 * j+1; // unexpected result
	i = (x,y) x-y(j, k); // thinks SUB is a simple macro
	i = ((((j)*(j)))*(((j)*(j)))); // nested macros DO work when # and ## aren't involved
	i = (((j)*(j))*(j));
	i = jk; // compilation error: no jk identifier
	puts("i" "j"); // prints "ij\n"
	
	i = SQR(j); // error: no function/macro named SQR now
	
	i = (j); // SQR defined again... but this time with no replacement list
	
	return 0;
}
