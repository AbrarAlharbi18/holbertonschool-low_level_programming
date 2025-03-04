#include <stddef.h> /* For NULL */
#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 *           in accept.
 * @s: The string to search.
 * @accept: The set of bytes to search for in s.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL); /* Return NULL if no match is found */
}
