#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments
 * @argc: The number of command line arguments
 * @argv: The array of command line arguments
 *
 * Return: 0 if successful, 1 if there are errors (e.g., not enough arguments)
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
/* Check if two arguments are passed */
if (argc != 3)
{
printf("Error\n");
return (1);
}
/* Convert arguments to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
/* Perform the multiplication */
result = num1 * num2;
/* Print the result */
printf("%d\n", result);
return (0);
}
