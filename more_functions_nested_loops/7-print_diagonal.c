#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');  /* Print spaces before the diagonal */
			}
			_putchar('\\');  /* Print the diagonal */
			_putchar('\n');
		}
	}
}
