#include "main.h"

void fizz_buzz(void); /* Declare the fizz_buzz function before main */

int main(void)
{
    fizz_buzz();  /* Call the fizz_buzz function */
    return 0;
}

void fizz_buzz(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            _putchar('F');
        if (i % 3 == 0 && i % 5 == 0)
            _putchar('i');
        if (i % 3 == 0 && i % 5 == 0)
            _putchar('z');
        if (i % 3 == 0 && i % 5 == 0)
            _putchar('z');
        if (i % 5 == 0)
            _putchar('B');
        if (i % 5 == 0)
            _putchar('u');
        if (i % 5 == 0)
            _putchar('z');
        if (i % 3 != 0 && i % 5 != 0)
            _putchar(i + '0');
        _putchar(' ');
    }
}
