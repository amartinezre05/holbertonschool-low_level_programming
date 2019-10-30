#include <stdbool.h>
#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order
* @array: The pointer to an array of int
* @size: The length of the array
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
unsigned int i, tmp = 0;
bool status = true;

while (status)
{
	status = false;
	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1] && array[i + 1] != '\0')
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			status = true;
			print_array(array, size);
		}
	}
}
}
