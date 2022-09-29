#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar(10);

	return (0);
}
