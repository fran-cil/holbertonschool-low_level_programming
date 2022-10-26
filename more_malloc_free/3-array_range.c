#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: All the values from min
 * @max: All the values from max
 * Return: Fail NULL, successful point
 */

int *array_range(int min, int max)
{
	int *point = NULL;
	int n = 0;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	point = malloc(sizeof(int) * (max - min + 1));
	if (point == NULL)
	{
		return (NULL);
	}
	n = (max - min + 1);

	for (i = 0 ; i < n ; i++)
	{
		point[i] = min;
		min++;
	}
	return (point);
}
