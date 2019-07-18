#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: Elements of the array.
* @size: Number of bytes.
*
* Return: To the value of pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int *e;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	e = malloc(sizeof(int) * nmemb * size);
	if (e == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		e[i] = 0;
	}
return (e);
}
