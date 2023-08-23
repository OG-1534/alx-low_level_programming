#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dlen = strlen(dest);

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[dlen + i] = src[i];
		src++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}
