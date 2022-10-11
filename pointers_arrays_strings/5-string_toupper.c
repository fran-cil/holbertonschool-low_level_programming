#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @lowtoupp: String to be changed
 * Return: Changed string
 */

char *string_toupper(char *lowtoupp)
{
	int i;

	for (i = 0; lowtoupp[i] != '\0'; i++)
	{
		if (lowtoupp[i] >= 'a' && lowtoupp[i] <= 'z')
		{
			lowtoupp[i] = lowtoupp[i] - 32;
		}
	}
	return (lowtoupp);
}
