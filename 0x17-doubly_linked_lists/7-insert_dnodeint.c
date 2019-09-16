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
dlistint_t *new;
unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (*h != NULL)
	{
		if (i == idx)
		{
			new->next = (*h);
			new->prev = 
