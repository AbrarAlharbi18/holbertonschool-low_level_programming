#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: Uses _putchar twice only
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 2;

	_putchar(alphabet[0]);
	_putchar(alphabet[1]);

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
}
