#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
	int i;
	int j;  /* Declare j outside the for loop */
	int sum = 0;

	/* Check if no arguments are passed */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate through all arguments */
	for (i = 1; i < argc; i++)
	{
		/* Check if argument is a valid number */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/* Add the number to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", sum);
	return (0);
}
