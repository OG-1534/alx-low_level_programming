#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int n, o, p;

	n = 612852475143;

	for (o = 1 ; o <= n ; o++)
	{
		if (n % o == 0)
		{
			if (n == o)
			{
				printf("%ld\n", o);
				break;
			}
			p = n / o;
			n = p;
		}
	}
	return (0);
}
