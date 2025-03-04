#include "main.h"
#include <stdio.h>

/**
 * main - Test _memset function
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[20];
    int i;

    _memset(buffer, 'A', 10);
    _memset(buffer + 10, 'B', 5);
    _memset(buffer + 15, 'C', 5);

    for (i = 0; i < 20; i++)
    {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    return (0);
}
