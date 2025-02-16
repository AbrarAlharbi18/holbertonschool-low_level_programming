#include <stdio.h>

/**
 * main - Prints all single digit numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop through numbers 0-9 */
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');  /* Convert and print the number */
	}
	putchar('\n');

	return (0);
}
