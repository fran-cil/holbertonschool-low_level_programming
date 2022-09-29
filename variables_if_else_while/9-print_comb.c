#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
