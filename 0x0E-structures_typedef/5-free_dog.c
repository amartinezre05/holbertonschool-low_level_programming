#include "dog.h"
#include <stdio.h>

/**
* free_dog - a function that free dogs.
* @d: Puntero type dog.
*
* Description: Function that frees the memory.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
