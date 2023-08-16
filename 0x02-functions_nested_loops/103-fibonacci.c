#include <stdio.h>

/**
 * main - sum of Fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	int limit = 4000000;
	int num1 = 1;
	int num2 = 2;
	int num3;
	int sum = 2;

	while (num3 <= limit)
	{
		num3 = num1 + num2;
		if (num3 % 2 == 0)
			sum = sum + num3;
		num1 = num2;
		num2 = num3;
	}
	printf("%d\n", sum);
	return (0);
}
