#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates the program with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		/* Terminate the program with status 98 if malloc fails */
		exit(98);
	}
	return (ptr);
}
