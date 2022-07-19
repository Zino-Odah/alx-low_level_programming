#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: array buffer that returns the pointer
 * @src: the string pointer
 * Return: the value pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int s;
	int t;

	for (t = 0; dest[t] != '\0'; t++)
	{
	}
	for (s = 0; src[s] != '\0'; s++)
	{
		dest[t] = src[s];
		t++;
	}
	return (dest);
}
