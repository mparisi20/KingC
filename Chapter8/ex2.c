#include <stdio.h>

// Exercise 8.2 from King
// By Max Parisi
// finished 1/23/2019

int main(void)
{
  int digit_occur[10] = {0};

  int digit, i;
  long n;

  printf("Enter a number: ");
  int chars_matched = scanf("%ld", &n);
  if (chars_matched == 0)
	  return -1;
  while (n > 0) {
    digit = n % 10;
    digit_occur[digit]++;
    n /= 10;
  }

  printf("Digit:        ");
  for (i = 0; i < 10; i++)
	  printf("%d  ", i);
  printf("\nOccurrences:  ");
  for (i = 0; i < 10; i++)
	  printf("%d  ", digit_occur[i]);

  return 0;
}
