#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int h = 0;
	int m;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(10);
			m++;
		}
		h++;
	}
}
