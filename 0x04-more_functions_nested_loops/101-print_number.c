#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer
 * @n: parameter to check
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
