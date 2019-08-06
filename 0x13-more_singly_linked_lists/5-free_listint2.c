#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - Function that frees a listint_t list.
* @head: A constant variable of type list_t.
*
* Return: Void function.
*
*/
void free_listint2(listint_t **head)
{
listint_t *tmp = *head;
listint_t *new;

	while (tmp != NULL)
	{
		new = tmp->next;
		free(tmp);
		tmp = new;
	}
	*head = NULL;
}
