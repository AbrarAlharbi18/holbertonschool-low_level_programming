#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 * @...: A variable number of arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0 && (format[i - 1] == 'c' || format[i - 1] == 'i' ||
					  format[i - 1] == 'f' || format[i - 1] == 's'))
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
				break;
		}

		i++;
	}

	va_end(args);

	printf("\n");
}
