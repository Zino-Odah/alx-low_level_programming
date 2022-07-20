#include "main.h"

/**
 * _pow_recursion - it returns the value of x
 * raised to the power of y
 * @x: value being raised
 * @y: value to be raised to
 *
 * Return: -1 if y is lower than 0 else return the value after being raised
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return(x * _pow_recursion(x, y - 1));
}
