#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @src: string to append
 * @dest: destination string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int d_length = 0;
	int s_length = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		d_length++;
	for (i = 0 ; src[i] != '\0' ; i++)
		s_length++;
	for (i = 0 ; i <= s_length ; i++)
		dest[d_length + i] = src[i];
	return (dest);
}
