#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @needle: substring
 * @haystack: string
 * Return: pointer to the beginning of the located substring or 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
