#include "search_algos.h"

/**
 * linear_search - function searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: pointer to first element of array to serach in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
