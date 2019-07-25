#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* int_index - a function that searches for an integer.
* @array: Variable the type int.
* @size: Size of the array.
* @cmp: Pointer to a function of ints.
*
* Return: To the value of int.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
	if (array == NULL || cmp == NULL)
	{
	return (-1);
	}
	if (size <= 0)
	{
	return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
		return (i);
		}
	}
return (-1);
}
