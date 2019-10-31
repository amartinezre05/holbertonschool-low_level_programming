#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order
* @array: The pointer to an array of int
* @size: The length of the array
* Return: void
*/
void selection_sort(int *array, size_t size)
{
unsigned int i, j, min, tmp = 0;
i = 0;

if (size < 2)
	return;

while (i < size - 1)
{
min = i;
j = i + 1;

	while (j < size)
	{
		if (array[j] < array[min])
			min = j;
	j++;
	}
	if (min != i)
	{
	tmp = array[min];
	array[min] = array[i];
	array[i] = tmp;
	print_array(array, size);
	}
i++;
}
}
