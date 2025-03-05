#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments
 * @argc: The number of command line arguments
 * @argv: The array of command line arguments
 *
 * Return: 0 if successful, 1 if there are errors (e.g., invalid number)
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	/* Check if no numbers are passed */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate through arguments and sum the numbers */
	for (i = 1; i < argc; i++)
	{
		/* Check if the argument is a valid number */
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convert argument to integer and add to sum */
		num = atoi(argv[i]);
		sum += num;
	}

	/* Print the sum */
	printf("%d\n", sum);
	return (0);
}
