#include "lists.h"
/**
 * print_dlistint - prints a doubly or singly linked list
 * @h: pointer to head of list
 * Return: number of nodes in the list beginning with h
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
