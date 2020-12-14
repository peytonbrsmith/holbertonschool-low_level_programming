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

	while (i < idx && idx != 0)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = current;
		newnode->prev = NULL;
		current->prev = newnode;
		return (newnode);
	}
	newnode->next = current;
	newnode->prev = current->prev;
	current->prev->next = newnode;
	current->prev = newnode;
	return (newnode);
}
