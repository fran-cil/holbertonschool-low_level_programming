#include "main.h"

/**
 * *_strncat - Concatenates two strings
 * @dest: String
 * @src: String
 * @n: Bytes
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
