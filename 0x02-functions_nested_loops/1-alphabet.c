#include "main.h"

/**
 * print_alphabet - It prints the alphabets in lowercase followed by a new line
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		_putchar(tolower(c));
	}
	_putchar('\n');
}
