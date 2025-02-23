#include "main.h"

/**
 * main - Entry point to the program
 *
 * Return: Always 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints numbers 1 to 100 with "Fizz", "Buzz", or "FizzBuzz"
 * based on the conditions.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar(i + '0');
		}

		_putchar(' ');  /* Print space between numbers and words */
	}

	_putchar('\n');  /* Print newline at the end */
}
