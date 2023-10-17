#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int lil_o_big;
	int a = 1;

	lil_o_big = (int) (((char *)&a)[0]);
	return (lil_o_big);
}
