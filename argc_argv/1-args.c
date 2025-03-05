#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: The number of command line arguments
 * @argv: The array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void)argv;  /* Mark argv as unused */
printf("%d\n", argc - 1);  /* Subtract 1 to exclude the program name */
return (0);
}
