#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7};
	int *b = &a[3];
	size_t i, j;
	memmove(b, a, 4*sizeof(int)); // the referenced memory ranges overlap. Doing this with memcpy causes undefined behavior.
	
	char csrc[100] = "Geeksfor"; 
    memmove(csrc+5, csrc, strlen(csrc)+1); 
    printf("%s\n", csrc); 
	
	for (i = 0; i < 7; i++)
		printf("%d ", a[i]);
#define TEST 1
	printf("\n");
	printf("%d\n", TEST);


/* #define TEST 1 // Macro definition has to come before usage in the file, so this wouldn't work */
/* Exercises:
1.
sizeof(a) / sizeof(a[0]) is better than sizeof(a) / sizeof(t)
because t would also need to be updated if you decide to 
change the array's type.

Someone reading the program would also need to find the
declaration to ensure that it is really an array of type t.
2.
one could use an ASCII digit to index an array with
arr[digit - '0'];
3. and 4.
*/
	bool weekend[7] = {true, false, false, false, false, false, true};
	bool weekend2[7] = {[0] = true, [6] = true};
	for (i = 0; i < 7; i++)
		printf("%d%d ", weekend[i], weekend2[i]);
	putchar('\n');
/* 5. */
	int fib_numbers[40] = {[1] = 1}; // all other elements initialized to 0
	for (i = 2; i < 40; i++)
		fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
	for (i = 0; i < 40; i++)
		printf("%d ", fib_numbers[i]);
/* 6. */
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
								 {0, 1, 1, 0, 0, 0, 0},
								 {1, 1, 0, 1, 1, 0, 1},
								 {1, 1, 1, 1, 0, 0, 1},
								 {0, 1, 1, 0, 0, 1, 1},
								 {1, 0, 1, 1, 0, 1, 1},
								 {1, 0, 1, 1, 1, 1, 1},
								 {1, 1, 1, 0, 0, 0, 0},
								 {1, 1, 1, 1, 1, 1, 1},
								 {1, 1, 1, 1, 0, 1, 1}};
/* 7. */
	const int segments2[10][7] = {{1, 1, 1, 1, 1, 1},
								 {0, 1, 1},
								 {1, 1, 0, 1, 1, 0, 1},
								 {1, 1, 1, 1, 0, 0, 1},
								 {0, 1, 1, 0, 0, 1, 1},
								 {1, 0, 1, 1, 0, 1, 1},
								 {1, 0, 1, 1, 1, 1, 1},
								 {1, 1, 1},
								 {1, 1, 1, 1, 1, 1, 1},
								 {1, 1, 1, 1, 0, 1, 1}};
/* 8. */
	double temperature_readings[30][24] = {{0.0}, }; // initializes all 720 elements to 0.0
/* 9. */
	double total = 0.0, avg_temp = 0.0;
	for (i = 0; i < 30; i++)
		for (j = 0; j < 24; j++)
			total += temperature_readings[i][j];
	avg_temp = total / 
			(sizeof(temperature_readings) / sizeof(temperature_readings[0][0]));
/* 10. */
	char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
							  {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
							  {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
							  {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
							  {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
							  {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
							  {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
							  {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
	putchar('\n');
	
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			printf("%c ", chess_board[i][j]);
		}
		putchar('\n');
	}
	
/* 11. */
	char checker_board[8][8];
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) {
				checker_board[i][j] = 'B';
			}
			else {
				checker_board[i][j] = 'R';
			}
		}
	}
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++)
			printf("%c ", checker_board[i][j]);
		putchar('\n');
	}

	return 0;
}
