#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int rows;
	int columns;
	int num = 0;

	for (rows = 0; rows < 10; rows++)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		for (columns = 1; columns < 10; columns++)
		{
			num = rows * columns;
			if ((num / 10) != 0)
			{
				if (columns != 0)
				{
					_putchar((num / 10) + '0');
				}
			}
			else
			{
				_putchar(' ');
			}
			_putchar((num % 10) + '0');

			if (columns < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
