#include "main.h"

/**
 * set_bit - sets the value of a bit
 * to 1 at a given index
 * @n: value to set
 * @index: the index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cover = 1;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	cover = cover << index;
	*n = ((*n) | cover);
	return (1);
}
