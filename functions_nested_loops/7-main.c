#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98); /* Prints the last digit of 98 */
    r = print_last_digit(0);  /* Prints the last digit of 0 */
    r = print_last_digit(-1024); /* Prints the last digit of -1024 */
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
