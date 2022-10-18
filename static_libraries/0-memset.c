#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: Memory space to be filled
 * @b: Byte to fill with
 * @n: Number of bytes
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
