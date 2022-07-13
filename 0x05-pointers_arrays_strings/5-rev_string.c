#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string its reversing
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int r = 0, v = 0;
	char e[1000];

	while (*(s + r))
	{
		*(e + r) = *(s + r);
		r++;
	}
	r = r - 1;
	while (r >= 0)
	{
		*(s + r) = *(e + v);
		v++;
		r--;
	}
}
