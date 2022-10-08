#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: String
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	c -= 1;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}

	_putchar(10);
}
