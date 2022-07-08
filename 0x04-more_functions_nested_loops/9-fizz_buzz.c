#include <stdio.h>

/**
 * main - Prints 1 to 100, followed by a new line
 * for multiples of 3, print Fizz
 * for multiples of 5, print Buzz
 * for multiples of both 3 and 5, print FizzBuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
