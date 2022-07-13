#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: the string its printing
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int s, t;

	for (s = 1; str[s] != '\0'; s++)
	{
		;
	}
	if (s % 2 == 0)
	{
		s = s / 2;
	}
	else
	{
		s = (s + 1) / 2;
	}
	while (str[s] != '\0')
	{
		t = str[s];
		s++;
		_putchar(t);
	}
	_putchar('\n');
}
