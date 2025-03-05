#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: The number of command line arguments
 * @argv: The array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void)argc; /* Mark argc as unused */
printf("%s\n", argv[0]);
return (0);
}
