#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array*
 * @value: The value to search for
 *
 * Return: return index on success, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
