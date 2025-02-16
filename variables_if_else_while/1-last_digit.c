#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;
    int last_digit;

    /* Initialize random number generator */
    srand(time(0));

    /* Generate random number */
    n = rand() - RAND_MAX / 2;

    /* Find last digit */
    last_digit = n % 10;

    /* Check and print the condition for the last digit */
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

    return 0;
}
