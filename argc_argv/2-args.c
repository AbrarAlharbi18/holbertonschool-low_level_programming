#include <stdio.h>

/**
 * main - Prints all arguments passed to the program
 * @argc: The number of command line arguments
 * @argv: The array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;
/* Loop through all arguments and print them */
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
