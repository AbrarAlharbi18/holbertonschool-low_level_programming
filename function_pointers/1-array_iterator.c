#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: A function pointer to the function to execute on each element.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)  /* Check if array and action are not NULL */
	{
		for (i = 0; i < size; i++)
		{
		action(array[i]);  /* Call the function pointed to by action */
		}
	}
}
