#include "search_algos.h"

/**
 * binary_search_recursion - helper to advanced_binary, recursion searches
 * for a value in an integer array
 *
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @low: array's starting index
 * @high: array's ending index
 *
 * Return: index where value is located,
 * or -1 if value not present or array is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t mid, x;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (x = low; x <= high; x++)
		printf("%i%s", array[x], x == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using Binary search algorithm, but,
 * returns first appearance of value in array
 *
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing where value is located,
 * or -1 if value not present or array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
