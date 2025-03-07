#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	/* Find the length of the string */
	while (s[j] != '\0')
	{
		j++;
	}

	/* Reverse the string by swapping characters */
	j--;  /* Move back to the last character */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
