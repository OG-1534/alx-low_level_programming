#include "search_algos.h"

/**
 * bin_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @low: array's left index
 * @high: array's right index
 * @value: value to search for
 *
 * Return: index where value is located
 * or -1 if value is not present or if array is NULL
 */
int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t left = low;
	size_t right = high - 1;
	size_t middle = 0;
	size_t x = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;
			printf("Searching in array: ");
			for (x = left; x < right; x++)
			{
				printf("%d, ", array[x]);
			}
			printf("%d\n", array[x]);
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);
}
/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 * or -1 if value is not present or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0;
	int result;

	if (array != NULL)
	{
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		if (bound + 1 < size)
			min = bound + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min - 1);
		result = bin_search(array, bound / 2,  min, value);
		if (result != -1)
			return (result);
	}
	return (-1);
}
