#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Lenght of the straight line
 */

void print_line(int n)
{
	int l = 0;

	while (n > l)
	{
		if (n <= 0)
		{
			_putchar(10);
		}
		_putchar('_');
		l++;
	}
	_putchar(10);
}
