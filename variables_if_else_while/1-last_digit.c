#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Last digit
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int ld = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last difig of %d is %d nad is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
