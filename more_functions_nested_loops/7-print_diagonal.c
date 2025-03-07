#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal.
 * @n: the number of times the character '\' should be printed.
 *
 * Description: This function prints a diagonal line of the character '\'
 * using spaces to align the characters in the terminal.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
