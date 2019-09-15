#include "lists.h"
/**
* add_dnodeint_end - Add node to the end of the list
* @head: Header of the list
* @n: The integer value
* Return: The node added
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *current = *head;
dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		new->prev = current;
		current->next = new;
	}
return (new);
}
