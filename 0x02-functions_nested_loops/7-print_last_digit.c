#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @ld
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (n < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}




