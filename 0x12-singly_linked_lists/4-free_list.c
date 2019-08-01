#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* free_list - A function that frees a list_t list.
* @head: A structure of pointer.
*
* Return: Void.
*
*/
void free_list(list_t *head)
{
list_t *new;

	while (head != NULL)
	{
		new = head;
		free(new->str);
		free(new);
		head->next = head;
	}
}
