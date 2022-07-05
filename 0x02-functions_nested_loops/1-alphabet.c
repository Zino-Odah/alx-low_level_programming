#include "main.h"

/**
 * print_alphabet - It prints the alphabets in lowercase followed by a new line
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int c;

	for (c = 0; c <= 26; c++)
	{
		_putchar(abc[c]);
	}
	_putchar('\n');
}
