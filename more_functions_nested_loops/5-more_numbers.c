#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int counter = 0;
	int n;

	while (counter <= 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar(10);
		counter++;
	}
}
