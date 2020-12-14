#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head
 * @index: index location
 *
 * Return: pointer to new node or NULL
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current, *next, *prev;

	if (head == NULL)
		return (-1);
	current = *head;
	for (i = 0; i < index || index == 0; i++)
	{
		if (current == NULL)
			return (-1);
		if (current->next == NULL)
			return (-1);
		if (index == 0)
			break;
		current = current->next;
	}
	if (index == 0)
	{
		next = current->next;
		free(current);
		*head = next;
		return (1);
	}
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	next = current->next;
	prev = current->prev;
	next->prev = prev;
	prev->next = next;
	free(current);
	return (1);
}
