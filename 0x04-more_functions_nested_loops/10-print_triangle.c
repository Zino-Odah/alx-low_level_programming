#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d, s;

		for (d = 1; d <= size; d++)
		{
			for (s = d; s < size; s++)
			{
				_putchar(' ');
			}

			for (s = 1; s <= d; s++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
