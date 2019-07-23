#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - a function that creates a new dog.
* @name: Variable the type char.
* @age: Variable the type float.
* @owner: Variable the type char.
*
* Return: To the value of dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c, d;
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		;
	a++;
	new->name = malloc(a * sizeof(char));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (b = 0; b < a; b++)
		new->name[b] = name[b];
	new->age = age;
	for (c = 0; owner[c] != '\0'; c++)
		;
	c++;
	new->owner = malloc(c * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (d = 0; d < c; d++)
		new->owner[d] = owner[d];
return (new);
}
