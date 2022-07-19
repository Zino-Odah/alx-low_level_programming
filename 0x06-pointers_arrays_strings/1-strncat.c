#include "main.h"

/**
 * _strncat - concatenates two strings and stops as indicated
 * @dest: array buffer that returns the pointer
 * @src: the string pointer
 * @n: where to stop
 * Return: the value pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s;
	int t;

	for (t = 0; dest[t] != '\0'; t++)
	{
	}
	for (s = 0; s < n; s++)
	{
		dest[t] = src[s];
		t++;
		if (src[s] == '\0')
		s = n;
	}
	return (dest);
}
