#include "lists.h"
/**
* print_listint - print linked lists of integers
* @h: head of the list
*
* Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
