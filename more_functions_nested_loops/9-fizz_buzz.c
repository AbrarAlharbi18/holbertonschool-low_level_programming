#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * for multiples of 3, prints Fizz
 * for multiples of 5, prints Buzz
 * for multiples of both 3 and 5, prints FizzBuzz
 *
 * Return: Always 0
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) /* Multiple of both 3 and 5 */
        {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0) /* Multiple of 3 */
        {
            printf("Fizz");
        }
        else if (i % 5 == 0) /* Multiple of 5 */
        {
            printf("Buzz");
        }
        else /* Not a multiple of 3 or 5 */
        {
            printf("%d", i);
        }

        if (i != 100) /* Print space between numbers/words */
        {
            printf(" ");
        }
    }
    printf("\n"); /* New line after all output */
    return (0);
}
