#include "main.h"

/**
 * jack_bauer - prints his 24hrs
 */

void jack_bauer(void)
{
	int j, b;

	for (j = 0; j < 24; j++)
	{
		for (b = 0; b < 60; b++)
		{
			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			if (b < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(b + '0');
			}
			else if (b >= 10)
			{
				_putchar(':');
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
