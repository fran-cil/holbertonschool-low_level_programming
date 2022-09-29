#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar(10);
	return (0);
}
