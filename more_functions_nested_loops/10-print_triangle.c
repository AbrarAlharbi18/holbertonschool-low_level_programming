#include "main.h"

/**
 * print_triangle - Prints a triangle of hash characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1; i <= size; i++) /* For each row */
		{
			for (int j = 1; j <= size - i; j++) /* Print spaces */
			{
				_putchar(' ');
			}
			for (int j = 1; j <= i; j++) /* Print hashes */
			{
				_putchar('#');
			}
			_putchar('\n'); /* New line after each row */
		}
	}
}
