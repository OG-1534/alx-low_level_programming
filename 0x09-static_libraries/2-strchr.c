#include "main.h"

/**
 * _strchr - function that locates character
 * @s: string to locate character
 * @c: first occurrence of the character
 * Return: first occurrence of the character or 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
