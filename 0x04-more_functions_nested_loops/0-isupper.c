#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase characters
 *
 * @c: value to be checked
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
