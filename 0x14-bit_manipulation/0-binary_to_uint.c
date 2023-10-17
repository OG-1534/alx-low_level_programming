#include "main.h"

/**
 * binary_to_uint - function that convert
 *  a binary number to an unsigned int
 *  @b: pointer to a string
 *
 *  Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t, k, length;
	unsigned int add = 0;
	unsigned int pw = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (t = 0; b[t] != '\0'; t++)
	{
		if (b[t] != '0' && b[t] != '1')
			return (0);
		for (k = length - 1; k > 0; k--)
			pw = pw * base;
		add = add + (pw * (b[t] - 48));
		length--;
		pw = 1;
	}
	return (add);
}
