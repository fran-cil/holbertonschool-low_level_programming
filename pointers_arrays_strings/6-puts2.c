#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: String
 */

void puts2(char *str)
{
	int len;
	int i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
