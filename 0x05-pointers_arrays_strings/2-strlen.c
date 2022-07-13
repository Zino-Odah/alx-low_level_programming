#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char pointer in this function
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		;
	return (l);
}
