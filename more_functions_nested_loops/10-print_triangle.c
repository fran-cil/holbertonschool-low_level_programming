#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 */

void print_triangle(int size)
{
	int height;
	int width;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (width = size; width >= 1; width--)
			{
				if (width <= height)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
