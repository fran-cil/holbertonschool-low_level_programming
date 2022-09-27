#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte\n", sizeof(longlongintType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}
