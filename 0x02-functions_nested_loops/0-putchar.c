#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abe[] = "_putchar";
	int p;

	for (p = 0; p < 8; p++)
	{
		_putchar(abe[p]);
	}
	_putchar('\n');
	return (0);
}
