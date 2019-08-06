#include <stdio.h>
#include "lists.h"

/**
* print_listint - A function that prints all the elements of a listint_t list.
* @h: A constant variable of type list_t.
*
* Return: The number of nodes (i).
*
*/
size_t print_listint(const listint_t *h)
{
listint_t *tmp = h;
unsigned int i;

	if (*tmp == NULL)
		return (NULL);
	while (!tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	i++;
	}
return (i);
}
