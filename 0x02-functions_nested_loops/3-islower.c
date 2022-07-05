#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase characters
 *
 * @c: value to be checked
 *
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
