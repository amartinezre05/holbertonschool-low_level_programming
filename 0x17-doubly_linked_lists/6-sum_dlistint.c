#include "lists.h"
/**
* sum_dlistint - Add the integer value in the node
* @head: The start of the list
* Return: The integer value of the sum
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
return (sum);
}
