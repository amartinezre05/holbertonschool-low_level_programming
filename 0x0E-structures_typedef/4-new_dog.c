#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - a function that creates a new dog.
* @name: Variable the type char.
* @age: Variable the type float.
* @owner: Variable the type char.
*
* Description: Creates a new dog
* Return: To the value of dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_t;

	dog_t = malloc(sizeof(struct dog));
	if (dog_t == NULL)
	{
		return (NULL);
	}
	dog_t->name = name;
	dog_t->age = age;
	dog_t->owner = owner;
return (dog_t);
}
