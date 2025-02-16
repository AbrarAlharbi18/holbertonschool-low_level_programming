#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Loop through the alphabet in reverse order */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');  /* Print a newline character after the alphabet */
	return (0);     /* Return 0 to indicate successful execution */
}
