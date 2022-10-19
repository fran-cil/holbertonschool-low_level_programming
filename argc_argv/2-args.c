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
	for (argc = 0; argv[argc]; argc++)
	{
		printf("%s\n", argv[argc]);
	}
	exit(EXIT_SUCCESS);
}
