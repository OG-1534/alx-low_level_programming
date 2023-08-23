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
	strcat(src, dest);
	return (dest);
}
