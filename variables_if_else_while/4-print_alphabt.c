#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar(10);
	return (0);
}
