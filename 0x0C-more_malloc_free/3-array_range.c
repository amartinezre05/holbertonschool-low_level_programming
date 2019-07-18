#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @min: The first number.
* @max: The second number.
*
* Return: To the value of pointer.
*/
int *array_range(int min, int max)
{
int j, i;
int *e;
j = 0;
	if (min > max)
	{
		return (NULL);
	}
	e = malloc(sizeof(int) * (max - min + 1));
	if (e == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		e[j] = i;
		j++;
	}
return (e);
}
