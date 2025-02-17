#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: Uses _putchar twice only
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	_putchar(alphabet[0]);
	_putchar(alphabet[1]);

	int i = 2;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
}
