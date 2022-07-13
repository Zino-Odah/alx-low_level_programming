#include "main.h"

/**
 * _strcpy - copies the string pointer
 * @dest: array buffer that returns the pointer
 * @src: the string pointer
 * Return: the value pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int s;
	int t;

	for (s = 0; src[s] != '\0'; s++)
	{
		;
	}
	for (t = 0; t < s && src[t] != '\0'; t++)
	{
		dest[t] = src[t];
	}
	for (t = t; t <= s; t++)
	{
		dest[t] = '\0';
	}
	return (dest);
}
