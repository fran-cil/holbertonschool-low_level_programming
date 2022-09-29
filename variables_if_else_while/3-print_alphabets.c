#include <stdio.h>

/**
 * main - Prints the alphabet in lower and uppercase
 *
 * Return: 0
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar(10);

	return (0);
}
