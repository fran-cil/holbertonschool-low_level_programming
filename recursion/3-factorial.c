#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Given number
 * Return: An int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
