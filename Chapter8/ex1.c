#include <stdbool.h>
#include <stdio.h>

// Exercise 8.1 from King
// By Max Parisi
// finished 1/23/2019

int main(void)
{
  bool digit_seen[10] = {false};
  bool digit_repeated[10] = {false};

  int digit, i;
  long n;

  printf("Enter a number: ");
  int chars_matched = scanf("%ld", &n);
  if (chars_matched == 0)
	  return -1;
  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit])
      digit_repeated[digit] = true;
    digit_seen[digit] = true;
    n /= 10;
  }

  printf("Repeated digit(s):");
  for (i = 0; i < 10; i++)
	  if (digit_repeated[i])
		  printf(" %d", i);

  return 0;
}
