#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;
	int l = n -1;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < l)
		{
			printf(", ");
		}
	}
	printf("\n");
}
