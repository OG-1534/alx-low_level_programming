#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return factorial
 * Return: -1 or 1
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
