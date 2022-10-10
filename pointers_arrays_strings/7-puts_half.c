#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String
 */

void puts_half(char *str)
{
	int len = 0;
	int n = 0;

	for (; str[len] != '\0'; len++)
	{
	}

	if ((n % 2) == 0)
	{
		for (n = len / 2; str[n]; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar(10);
}
