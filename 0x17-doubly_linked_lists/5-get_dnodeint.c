#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at index
 * @head: head node
 * @index: index to return
 *
 * Return: node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
}
