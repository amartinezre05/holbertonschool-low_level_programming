#include <stdio.h>
#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order
* @array: The pointer to an array of int
* @size: The length of the array
* Return: void
*/
void selection_sort(int *array, size_t size)
{
unsigned int i, tmp = 0;

while (size)
{
	for (i = 0; i <= size; i++)
	{
		tmp = array[i];
		if (tmp > array[i + 1])
		{
			tmp = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
		}
		else
	}
}
}
