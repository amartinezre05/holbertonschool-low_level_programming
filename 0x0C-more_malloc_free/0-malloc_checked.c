#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc.
* @b: Unsigned int variable.
*
* Return: Void.
*/
void *malloc_checked(unsigned int b)
{
int *p;
	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}
return (p);
}
