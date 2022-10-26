#include "main.h"

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: Elements
 * @size: Bytes
 * Return: Fail NULL, successful point
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	point = malloc(nmemb * size);

	if (point == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < (nmemb * size); i++)
	{
		point[i] = 0;
	}
	return (point);
}
