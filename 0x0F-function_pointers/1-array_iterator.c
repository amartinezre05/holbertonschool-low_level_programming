#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_iterator - a function given as a parameter on each element of an array.
* @array: Variable the type int.
* @size: Size of the array.
* @action: Pointer to a function of ints.
*
* Return: To the value of void.
*/
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
