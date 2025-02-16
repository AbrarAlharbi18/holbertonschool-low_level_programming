#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program.
 * Description: This function generates a random number and
 * prints whether the number is positive, negative, or zero.
 */
int main(void)
{
	int n;

	srand(time(0));  /* Initialize random number generator */
	n = rand() - RAND_MAX / 2;  /* Generate random number */

	/* Check whether the number is positive, negative, or zero */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);  /* Return value wrapped in parentheses */
}
