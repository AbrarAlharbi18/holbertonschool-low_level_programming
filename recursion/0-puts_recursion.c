#include "main.h"

/**
 * _puts_recursion - Prints a string recursively
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: End of string */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
