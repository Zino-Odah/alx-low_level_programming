#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an integer array
 * @a: pointer of the element
 * @n: number of elements in array
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);

		if (s < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
