#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A function pointer to the printing function.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)  /* Check if name and f are not NULL */
		f(name);    /* Call the function pointed to by f */
}
