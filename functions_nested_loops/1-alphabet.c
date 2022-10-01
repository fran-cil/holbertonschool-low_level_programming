#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	putchar(10);
}
