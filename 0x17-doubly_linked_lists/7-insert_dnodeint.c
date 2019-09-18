#include "lists.h"
/**
* insert_dnodeint_at_index - Insert an new node in specific index
* @h: Header
* @idx: Index
* @n: The value of the node
* Return: The new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *tmp = *h;
unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
