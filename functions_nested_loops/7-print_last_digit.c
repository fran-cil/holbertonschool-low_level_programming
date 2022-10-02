#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Number to be checked
 *
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
