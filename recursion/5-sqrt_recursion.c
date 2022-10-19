#include "main.h"

/**
 * aux - Auxiliar
 * @n: Number
 * @i: Helper
 * Return: -1
 */

int aux(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (aux(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (aux(n, 0));
}
