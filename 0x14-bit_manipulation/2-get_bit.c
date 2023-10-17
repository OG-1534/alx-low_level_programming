#include "main.h"

/**
 * get_bit - returns the value of
 * a bit at a given index
 * @index: the index
 * @n: number in index
 *
 * Return: index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int t;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (t = 0; t < index; t++)
		n = n >> 1;
	return ((n & 1));
}
