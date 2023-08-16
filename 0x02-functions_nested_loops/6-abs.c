#include "main.h"

/**
 *_abs - function that computes the absolute value of an integer
 *@n: parameter to check
 *Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n >= 0)
		return (n);
	return (0);
}
