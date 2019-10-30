#include "sort.h"
/**
* swap - function to swap two nodes
* @nodeL: Node
* @nodeR: Node
* Return: Void
*/
void swap(listint_t *nodeL, listint_t *nodeR)
{
nodeL->next = nodeR->next;
nodeR->next = nodeL;
nodeR->prev = nodeL->prev;
nodeL->prev = nodeR;
/*	if (nodeL->next)
	{
		(nodeL->next)->prev = nodeL;
	}
	else
	{
		nodeL->next = NULL;
	}
	if (nodeR->prev)
	{
		(nodeR->prev)->next = nodeR;
	}
	else
	{
		nodeR->prev = NULL;
	}*/
if (nodeR->prev != NULL)
	(nodeR->prev)->next = nodeR;
if (nodeL->next != NULL)
	(nodeL->next)->prev = nodeL;
}
/**
* insertion_sort_list - sort an array using the bubble method
* @list: int tmp
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
listint_t *tmp1, *tmp2; /*tmp2*/

	if (!list)
	return;

	tmp1 = (*list)->next;

	while (tmp1)
	{
	tmp2 = tmp1;
	tmp2 = tmp2->next;
	while (tmp2->n < (tmp2->prev)->n)
	{
		swap(tmp1->prev, tmp1);
/*		if (tmp1->prev == NULL)
			*list = tmp1;*/
		print_list(*list);	
	}
/*	tmp2 = tmp1;
	while (tmp2->prev)
	{
		if (tmp2->n < (tmp2->prev)->n)
		{
			swap(tmp2->prev, tmp2);
			if (tmp2->prev == NULL)
			{
				*list = tmp2;
			}
			print_list(*list);
		}
	if (tmp2->prev != NULL)
		tmp2 = tmp2->prev;
	}*/
	tmp1 = tmp1->next;
	}
}
