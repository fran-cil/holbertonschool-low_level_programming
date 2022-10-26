#include "main.h"

/**
 * malloc_checked - Allocates memory depending of the type
 * @b: Length of the array
 * Return: Point on success, 98 on fail
 */

void *malloc_checked(unsigned int b)
{
	void *point;

	if (b < 1)
	{
		exit(98);
	}

	point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}
