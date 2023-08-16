#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: Always 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0 ; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (b = 0 ; b <= 9 ; b++)
		{

