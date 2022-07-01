#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sdn;

	for (sdn = '0'; sdn <= '9' ; sdn++)
	{
		putchar(sdn);
		if (sdn != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
