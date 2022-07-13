#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: the string its printing
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int s, t;

	for (s = 0; str[s] != '\0'; s++)
	{
		;
	}
	for (t = 0; t < s; t = t + 2)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
