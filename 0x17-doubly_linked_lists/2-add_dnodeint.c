#include "lists.h"
/**
* add_dnodeint - add a node at the beginning
* @head: The head of the lists
* @n: The integer
* Return: The new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
