#include "dog.h"
#include <stdio.h>

/**
* init_dog - initialize a variable of type struct dog.
* @d: Variable type dog.
* @name: The char variable.
* @age: The float variable.
* @owner: The char variable.
*
* Description: Function that initialize a variable of type struct dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
