#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index location
 * @h: pointer to the head
 * @idx: index location
 * @n: integer to store in new index
 *
 * Return: pointer to new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h;
	dlistint_t *newnode;

	while (i < (idx - 1))
	{
		if (idx == 0)
			break;
		current = current->next;
		i++;
	}
	if (current == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		*h = current;

		return (newnode);
	}
	newnode->next = current->next;
	newnode->prev = current->next->prev;
	current->next->prev = newnode;
	current->next = newnode;
	return (newnode);
}
