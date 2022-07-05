#include "main.h"

/**
 * print_alphabet - It prints the alphabets in lowercase followed by a new line
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char abe[] = "abcdefghijklmnopqrstuvwxyz";
	int c;

	for (c = 0; c < 27; c++)
	{
		_putchar(abe[c]);
	}
	_putchar('\n');
}
