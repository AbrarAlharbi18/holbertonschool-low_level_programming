#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Print the numbers 0 to 9 */
	for (num = 48; num <= 57; num++) /* ASCII values for '0' to '9' */
	{
		putchar(num);
	}

	/* Print the letters 'a' to 'f' */
	for (num = 97; num <= 102; num++) /* ASCII values for 'a' to 'f' */
	{
		putchar(num);
	}

	putchar('\n'); /* Print a newline character */
	return (0);    /* Return 0 to indicate successful execution */
}
