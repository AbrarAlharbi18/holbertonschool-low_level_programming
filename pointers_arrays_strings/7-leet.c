#include "main.h"

/**
 * leet - encodes a string into 1337 (leet) speak
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	/* Loop through the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check each character and replace it with corresponding 1337 character */
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}

	return (str);
}
