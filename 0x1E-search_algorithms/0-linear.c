#include "search_algos.h"

/**
 * linear_search - search for a value
 * @array: pointer
 * @size: number of elements
 * @value: the number to search
 * Return: int
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
