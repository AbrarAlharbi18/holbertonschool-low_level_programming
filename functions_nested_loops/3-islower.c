#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	/* Check if c is between 'a' and 'z' */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
