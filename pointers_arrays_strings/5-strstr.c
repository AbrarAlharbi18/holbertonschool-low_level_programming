#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string to be searched
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* Check if needle is an empty string */
	if (*needle == '\0')
		return (haystack);

	/* Iterate through each character of haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Compare substring starting from current character of haystack */
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			;

		/* If the entire needle was found */
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);  /* Return NULL if no match is found */
}
