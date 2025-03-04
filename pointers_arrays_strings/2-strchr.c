#include "main.h"
#include <stddef.h>  /* Include this to define NULL */

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	if (*s == c) /* Check if the character is at the start */
	{
		return (s);
	}

	while (*s != '\0') /* Traverse the string */
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0') /* Handle case where the character is the null terminator */
	{
		return (s);
	}

	return (NULL);
}
