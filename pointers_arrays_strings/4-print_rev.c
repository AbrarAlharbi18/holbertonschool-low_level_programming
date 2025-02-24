#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print in reverse */
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}

	_putchar('\n');
}
