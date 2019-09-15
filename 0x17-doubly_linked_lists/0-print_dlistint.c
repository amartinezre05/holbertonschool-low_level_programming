#include "lists.h"
/**
* print_dlistint - print the elements of doubly linked list
* @h: pointer
* Return: Number of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
