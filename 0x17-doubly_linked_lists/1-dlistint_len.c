#include "lists.h"
/*
* dlistint_len - Take the length of the list
* @h: The start of the list
* Return: The length
*/
size_t dlistint_len(const dlistint_t *h)
{
int i;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
return (i);
}
