#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum
 * of all its parameters
 * @n: parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(ap, const unsigned int);
		}
	}
	va_end(ap);
	return (sum);
}
