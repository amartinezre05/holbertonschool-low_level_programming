#include "holberton.h"
#include <stdlib.h>

/**
* create_array - Array with a specific char
* @size: Size of the array
* @c: The specific char.
*
* Return: The pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *b;

	if (size == 0)
	{
		return (NULL);
	}

	b = malloc(sizeof(c) * size);
	if (b == NULL)
	{
		return (NULL);
	}
	else
	{
	while (i < size)
	{
		b[i] = c;
		i++;
	}
	}
return (b);
}
