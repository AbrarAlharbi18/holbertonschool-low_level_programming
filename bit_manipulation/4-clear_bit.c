#include "main.h"

/**
 * clear_bit - sets a bit at given index to 0
 * @n: pointer to number to modify
 * @index: index of bit to clear
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
