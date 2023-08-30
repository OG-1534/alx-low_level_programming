#include "main.h"

/**
 * prime_n - prime number
 * @p: number
 * @q: divisor
 * Return: 0
 */
int prime_n(int p, int q)
{
	if (p <= 1 || (p != q && p % q == 0))
	{
		return (0);
	}
	else if (p == q)
	{
		return (1);
	}
	return (prime_n(p, q + 1));
}
/**
 * is_prime_number - returns 1 for prime number
 * otherwise return 0
 * @n: integer to check
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_n(n, 2));
}
