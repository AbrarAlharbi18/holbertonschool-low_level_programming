#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr); /* Print the modified string */
    printf("%s", str); /* Print the original string (modified in place) */
    return (0);
}
