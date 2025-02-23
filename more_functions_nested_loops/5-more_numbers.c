#include "main.h"

/**
 * more_numbers - Prints 0 to 14, 10 times, followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)  /* Print 10 times */
	{
		for (j = 0; j <= 14; j++)  /* Print numbers 0-14 */
		{
			if (j >= 10)
				_putchar('1');  /* Print tens digit */
			_putchar(j % 10 + '0');  /* Print ones digit */
		}
		_putchar('\n');  /* New line after each set */
	}
}
