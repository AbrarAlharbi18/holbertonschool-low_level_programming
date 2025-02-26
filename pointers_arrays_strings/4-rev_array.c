#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to reverse
 * @n: the number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		/* Swap the elements at start and end */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
