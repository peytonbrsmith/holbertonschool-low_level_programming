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
	listint_t *next;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		next = current->next;
		current = next;
		i++;
	}
	return (next);
}
