#include <string.h>
#include <stdio.h>

int main(void)
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7};
	int *b = &a[3];
	size_t i;
	memmove(b, a, 4*sizeof(int)); // the referenced memory ranges overlap. Doing this with memcpy causes undefined behavior.
	
	char csrc[100] = "Geeksfor"; 
    memmove(csrc+5, csrc, strlen(csrc)+1); 
    printf("%s\n", csrc); 
	
	for (i = 0; i < 7; i++)
		printf("%d ", a[i]);
#define TEST 1
	printf("\n");
	printf("%d\n", TEST);
	return 0;
}

/* #define TEST 1 // Macro definition has to come before usage in the file, so this wouldn't work */
