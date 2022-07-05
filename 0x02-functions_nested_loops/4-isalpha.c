#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * c - value to check
 *
 * Return: 1 if c is lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
