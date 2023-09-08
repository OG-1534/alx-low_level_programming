#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to old memory
 * @old_size: allocated space
 * @new_size: new memory block
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	size_t i, max = new_size;
	char *o = ptr;

	if (ptr == NULL)
	{
		a = malloc(new_size);
			return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	a = malloc(new_size);
		if (a == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		a[i] = o[i];
	free(ptr);
	return (a);
}
