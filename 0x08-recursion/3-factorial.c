#include "main.h"

/**
 * factorial - it returns the factorial of a given number
 * @n: given number
 *
 * Return: -1 if n less than 0 if not the factorial n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

