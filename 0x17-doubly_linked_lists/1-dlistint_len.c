#include "lists.h"
/**
* dlistint_len - lists length of linked list of integers
* @h: head of the list
*
* Return: Number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
