#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns ptr to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int i;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}
