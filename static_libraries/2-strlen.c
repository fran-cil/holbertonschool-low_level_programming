#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		s++;
		lenght++;
	}
	return (lenght);
}
