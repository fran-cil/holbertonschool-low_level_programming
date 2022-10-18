#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: Integer to be checked
 *
 * Return: The absolute value of i
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = (-1) * i;
		return (i);
	}
	else if (i > 0)
	{
		return (i);
	}
	return (0);
}
