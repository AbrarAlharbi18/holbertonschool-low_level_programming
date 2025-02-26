#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1; /* flag to check if the next letter should be capitalized */

	while (str[i] != '\0')
	{
		if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32; /* convert lowercase to uppercase */
			capitalize = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
				str[i] == '(' || str[i] == ')')
		{
			capitalize = 1; /* next letter should be capitalized */
		}
		else if (str[i] == '{' || str[i] == '}')
		{
			capitalize = 1; /* next letter should be capitalized */
		}
		else
		{
			capitalize = 0; /* continue in the middle of the word */
		}
		i++;
	}
	return (str);
}
