#include "lists.h"
/**
* free_dlistint - Free the list
* @head: The start of the list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current, *next;
current = head;

	while (current != NULL)
	{
		next = current->next;
		free (current);
		current = next;
	}
}
