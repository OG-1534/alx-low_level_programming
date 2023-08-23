#include "main.h"

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
	int dlen = 0;

	for (i = 0 ; dest[i] <= 0 ; i++)
		dlen++;
	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[dlen + i] = src[i];
		src++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}
