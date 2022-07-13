#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string its printing
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int r = 0;

	while (s[r] != 0)
	{
		r++;
	}
	while (r > 0)
	{
		r--;
		_putchar(s[r]);
	}
	_putchar('\n');
}
