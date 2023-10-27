#include "main.h"

/**
 * print_out_binary - prints binary
 * @n: input
 *
 * Return: void
 */
void print_out_binary(unsigned long int n)
{
	if (n == 0)
		return;
	print_out_binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - prints the binary
 * representation of a number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_out_binary(n);
	}
}
