#include "main.h"
#include <stddef.h>  /* Include to use NULL */

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * Return:A pointer to beginning of located substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0') /* If needle is an empty string, return haystack */
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++) /* Iterate over haystack */
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			;

		if (needle[j] == '\0') /* If the entire needle was found */
			return (haystack + i);
	}

	return (NULL); /* Return NULL if no match is found */
}
