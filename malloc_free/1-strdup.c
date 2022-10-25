#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String
 * Return: Pointer of the duplicate of str, NULL if str = NULL,
 * NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	cpy = malloc((i + 1) * sizeof(char));
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		cpy[j] = str[j];
	}
	return (cpy);
}
