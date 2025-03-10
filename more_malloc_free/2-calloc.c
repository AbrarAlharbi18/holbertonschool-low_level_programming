#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total size to allocate */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	/* Set the allocated memory to zero */
	memset(ptr, 0, total_size);

	return (ptr);
}
