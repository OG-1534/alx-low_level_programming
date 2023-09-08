#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements in array
 * @size: size of array
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *out;

	if (nmemb == 0 || size == 0)
		return (NULL);
	out = calloc(nmemb, size);
	if (out == NULL)
		return (NULL);
	else
		return (out);
}
