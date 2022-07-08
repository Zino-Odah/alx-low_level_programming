#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: number of times _ should be printed
 */

void print_line(int n)
{
	int s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (s = 0; s < n; s++)
			_putchar('_');
		_putchar('\n');
	}
}
