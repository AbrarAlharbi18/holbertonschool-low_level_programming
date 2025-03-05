#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1)); /* Start recursion with the initial guess 1 */
}

/**
 * sqrt_helper - Helper function to calculate the square root using recursion
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess > n) /* If guess squared ater thannn no square root */
		return (-1);
	if (guess * guess == n) /* If guess squared equ found the square root */
		return (guess);
	return (sqrt_helper(n, guess + 1)); /* Try the next guess */
}
