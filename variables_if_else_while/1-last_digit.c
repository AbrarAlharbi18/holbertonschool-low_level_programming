#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program.
 * Description: This function generates a random number and prints the
 * last digit of the number, followed by a message based on its value.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));  /* Initialize random number generator */
    n = rand();  /* Generate random number */

    last_digit = n % 10;  /* Get the last digit of the number */

    /* Check the value of the last digit and print the appropriate message */
    if (last_digit > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
    }
    else if (last_digit == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, last_digit);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
    }

    return (0);  /* Return value wrapped in parentheses */
}
