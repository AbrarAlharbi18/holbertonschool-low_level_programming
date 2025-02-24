#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to the destination buffer
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy the string */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Add the null terminator */
	dest[i] = '\0';

	return (dest);
}
