#include "main.h"

/**
 * _memset - function that fills memory
 * @s: pointer to memory area
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
