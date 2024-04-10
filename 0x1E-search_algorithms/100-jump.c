#include "search_algos.h"

/**
 * jump_search -  function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 * or -1 if value is not present or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0, x = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			low = high;
			high = high + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       low, array[low]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low, high);
		for (x = low; x <= high; x++)
		{
			if (x < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       x, array[x]);
				if (array[x] == value)
					return (x);
			}
		}
	}
	return (-1);
}
