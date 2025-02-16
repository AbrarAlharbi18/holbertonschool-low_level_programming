#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Loop through digits 0-8 */
	for (num = 48; num <= 57; num++)
	{
		putchar(num); /* Print the current digit */

		/* Check if it's not the last number */
		if (num != 57)
		{
			putchar(','); /* Print the comma */
			putchar(' '); /* Print the space */
		}
	}

	putchar('\n'); /* Print a newline at the end */
	return (0);
}
