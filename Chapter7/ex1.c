#include <stdio.h>

// Exercise 7.1 from King
// By Max Parisi
// finished 1/12/2019

int main(void)
{
  short i; 
  int n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    printf("%10hd%10hd\n", i, i * i);

  return 0;
}

/* to overflow the squares2 program with int (32-bit), you
would need to print around 46,000 rows */

/* if i is a short (16-bits on my machine), overflow begins at
entry 182 because 182 is the lowest whole number > sqrt(2^15 - 1) */

/* long has the same effect as int */

/* Conclusion: short is 16bit, int and long are 32bit */