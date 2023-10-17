#include "main.h"

/**
 * flip_bits - returns the number of bits
 * to flip to get from one number to another
 * @m: number
 * @n: number
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cnt, res;

	res = n ^ m;
	for (cnt = 0; res > 0;)
	{
		if ((res & 1) == 1)
			cnt++;
		res = res >> 1;
	}
	return (cnt);
}
