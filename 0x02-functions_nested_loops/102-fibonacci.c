#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int sum;
	int i;

	printf("%d, ", num1);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%d, ", num2);
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}


