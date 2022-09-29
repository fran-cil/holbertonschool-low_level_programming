#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0 (putchar)
 *
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
