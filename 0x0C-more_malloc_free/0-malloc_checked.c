#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 *
 * Return: pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	char *out;

	out = malloc(b);
	if (out == NULL)
		exit(98);
	else
		return (out);
}
