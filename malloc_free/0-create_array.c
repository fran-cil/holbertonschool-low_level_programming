#include "main.h"

/**
 * *create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: Size of the array
 * @c: char
 * Return: NULL if size 0, Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *p;

	if (size <= 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		p[j] = c;
	}
	return (p);
}
