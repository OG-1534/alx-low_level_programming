#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: array of chars
 * @c: char to initialize
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		arr[j] = c;
	return (arr);
}
