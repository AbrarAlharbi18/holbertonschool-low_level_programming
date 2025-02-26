#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);  /* Print the modified string */
    printf("%s", str);   /* Print the modified string again, since the string is modified in place */
    return (0);
}
