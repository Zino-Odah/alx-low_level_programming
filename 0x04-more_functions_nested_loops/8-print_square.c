#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int d, s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (d = 0; d < size; d++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
