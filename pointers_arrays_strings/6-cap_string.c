#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first character if it's a letter */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	/* Iterate through the string */
	for (i = 1; str[i] != '\0'; i++)
	{
		/*
		 * If the current character is a separator and the next character
		 * is a letter, capitalize it.
		 */
		if (is_separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
	}

	return (str);
}
