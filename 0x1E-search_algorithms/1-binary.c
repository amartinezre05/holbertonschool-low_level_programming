#include "search_algos.h"

/**
 * print - print values
 * @array: pointer
 * @start: start
 * @end: end
 * Return: void
*/
void print(int *array, size_t start, size_t end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search - search for a value
 * @array: pointer
 * @size: number of elements
 * @value: the number to search
 * Return: int
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start, end;

	start = 0;
	end = size - 1;
	if (!array)
		return (-1);
	while (start <= end)
	{
		print(array, start, end);
		if (array[(start + end) / 2] == value)
			return ((start + end) / 2);
		if (array[(start + end) / 2] < value)
			start = ((start + end) / 2) + 1;
		else
			end = ((start + end) / 2) - 1;
	}
return (-1);
}
