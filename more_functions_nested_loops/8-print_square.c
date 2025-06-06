#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square to print.
 *
 * Description: The function prints a square of '#' characters of size `size`.
 * If the size is 0 or less, it prints only a new line.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
