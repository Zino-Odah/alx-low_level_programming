#include "main.h"

/**
 * more_numbers - prints 0 to 14 x10 followed by a new line
 */

void more_numbers(void)
{
	int i, f;

	for (i = 0; i < 10; i++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f >= 10)
				_putchar((f / 10) + '0');
			_putchar((f % 10) + '0');
		}
		_putchar('\n');
	}
}
