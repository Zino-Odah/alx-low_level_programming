#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @a: value to be checked
 *
 * Return: absolute value of an integer
 */

int _abs(int a)
{
	if (a < 0)
		a = -a;
	return (a);
}
