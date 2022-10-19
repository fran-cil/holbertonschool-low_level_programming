#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Argument count
 * @argv: Argument list
 * Return: An int
 */

int main(int argc, char **argv)
{
	int num1, num2, rslt;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	rslt = num1 * num2;
	printf("%d\n", rslt);
	exit(EXIT_SUCCESS);
}
