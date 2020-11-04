#include "lists.h"
/**
 * get_nodeint_at_index - gets a node at index
 * @head: head node
 * @index: index to return
 *
 * Return: node at index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
}
