#include "lists.h"
/**
* listint_len - lists length of linked list of integers
* @h: head of the list
*
* Return: Number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
