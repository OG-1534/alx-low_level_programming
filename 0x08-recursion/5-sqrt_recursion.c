#include "main.h"

/**
 * sq_root - returns natural square root
 * @p: number square rooted
 * @q: root
 * Return: square root or -1
 */
int sq_root(int p, int q)
{
	if (q * q == p)
	{
		return (q);
	}
	else if (q * q > p)
	{
		return (-1);
	}
	return (sq_root(p, q + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number to square root
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sq_root(n, 0));
}
