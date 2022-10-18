#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: String
 * @c: Character
 * Return: First ocurrence or NULL if the char is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	if (c == s[i])
	{
		return (&s[i]);
	}
	return (NULL);
}
