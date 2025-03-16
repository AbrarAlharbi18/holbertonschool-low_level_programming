#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @cmp: A function pointer to the comparison function.
 *
 * Return: The index of the first matching element, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)  /* Check if array, cmp, and size are valid */
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))  /* Call the comparison function */
				return (i);     /* Return the index of the first match */
		}
	}
	return (-1);  /* Return -1 if no match is found or if inputs are invalid */
}
