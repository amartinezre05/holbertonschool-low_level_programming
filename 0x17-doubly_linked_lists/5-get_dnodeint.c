#include "lists.h"
/**
* get_dnodeint_at_index - Return the number of the node
* @head: The start of the list
* @index: The number
* Return: The integer value
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;

	while (current != NULL)
	{
		current = current->next;
		if (i == index)
			break;
		else
			return (NULL);
	}
return (current);
}
